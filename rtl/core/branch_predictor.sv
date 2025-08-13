// 2-Bit Branch Predictor with BHT & BTB
// Author : Muhammad Zain
// Date   : 27/4/2025


`ifndef VERILATOR
`include "../defines/pcore_interface_defs.svh"
`else
`include "pcore_interface_defs.svh"
`endif

module branch_predictor #(
	`ifdef FPGA
    	parameter int NUM_INSTRS =  16,							// 2^16 instructions in 256 KB
    `else
    	parameter int NUM_INSTRS =  19,							// 2^19 instructions in 2 MB
    `endif
    parameter int INDEX_BITS  	 =  7,							// 2^7 = 128 table entries
    parameter int TABLE_DEPTH    =  1 << INDEX_BITS,
    parameter int TAG_BITS       =  NUM_INSTRS - INDEX_BITS,
    parameter int BHT_ENTRY_SIZE =  TAG_BITS + 3,				// 1 Valid bit + 2 branch state bits + Tag bits
    parameter int BTB_ENTRY_SIZE =  NUM_INSTRS + TAG_BITS + 1, 	// 1 Valid bit + Jump address >> 2 + Tag bits
    parameter int GHR_SIZE       =  3,
    parameter int PHT_DEPTH      =  1 << GHR_SIZE

)(

	input 	logic 					             clk,
	input 	logic					             reset,
	// Branch predictor <---> Fetch interface
	input 	logic [`XLEN-1:0] 			         pc_f,
	input 	logic [`XLEN-1:0]			         instruction,
	output 	type_bp2if_s                         bp2if_o,
	//input 	logic [31:0]		             	offset,
	// Branch predictor <---> Execute interface
	input 	logic [`XLEN-1:0] 			         pc_e, 
	input 	logic [`XLEN-1:0]			         alu_result_e,	
	input 	logic					             br_actual,
	input	logic					             stall 	
);

    // Branch History Table and Branch Target Buffer
	logic [BHT_ENTRY_SIZE-1:0]               bht [TABLE_DEPTH-1:0];
	logic [BTB_ENTRY_SIZE-1:0]               btb [TABLE_DEPTH-1:0];

	// Global History Register
	logic [GHR_SIZE-1:0]					 ghr;

	// Pattern History Table
	localparam logic [1:0] pht [0:PHT_DEPTH-1] = '{2'b01, 2'b01, 2'b01, 2'b10, 2'b01, 2'b10, 2'b10, 2'b10};

	// Local Signals
	type_rv_opcode_e                         opcode;
	logic [`XLEN-1:0]                        offset;
    logic [`XLEN-1:0]                        target_pc;
	logic [`XLEN-1:0]                        addr_from_btb;
	logic [`XLEN-1:0]                        opposite_dir;
	logic [INDEX_BITS-1:0]                   index_f;
	logic [INDEX_BITS-1:0]			         index_e;
	logic [BTB_ENTRY_SIZE-1:0] 		         buffer_entry;
	logic [TAG_BITS-1:0] 			         tag;
	logic [2:0]						         mux_sel;
	logic [1:0] 					         new_state;
	logic [1:0]		 				         state_f;
	logic [1:0] 					         state_e;
	// control signals
	logic 							         prediction_made_f;
	logic 							         prediction_made_e;
	logic							         prediction_wrong;
	logic							         predict_taken;
	logic							         jalr_addr_reqd_f;
	logic							         jalr_addr_reqd_e;
	logic 							         valid;
	logic 							         is_branch;
	logic							         is_jal;
	logic							         is_jalr;
	logic					                 flush_f;



// branch and jump selection signals
assign opcode = type_rv_opcode_e' (instruction[6:2]);
assign is_branch = (opcode == OPCODE_BRANCH_INST); // 7'b1100011);
assign is_jal =    (opcode == OPCODE_JAL_INST); //7'b1101111);
assign is_jalr =   (opcode == OPCODE_JALR_INST); //7'b1100111);

// immediate generation for branch and jal.
//other than that not required so even if calculated, has no affect
assign offset = is_branch ? {{20{instruction[31]}}, instruction[7], instruction[30:25], instruction[11:8], 1'b0} 
                :{{12{instruction[31]}}, instruction[19:12], instruction[20], instruction[30:21], 1'b0};

// PC storage for branch incase of wrong prediction
always_ff @ (posedge clk) begin
	if (!reset) begin
		opposite_dir <= 32'h00000000;
	end
    else if (!stall & is_branch) begin
		if (predict_taken)
			opposite_dir <= pc_f + 4;
		else
			opposite_dir <= pc_f + offset;
	end
end


assign index_f = pc_f[INDEX_BITS+1:2];
assign index_e = pc_e[INDEX_BITS+1:2];
assign buffer_entry = (is_jalr) ? btb[index_f] : {(BTB_ENTRY_SIZE-BHT_ENTRY_SIZE)'(0), bht[index_f]};
assign tag = buffer_entry[TAG_BITS-1:0];
assign tag_matched = (tag == pc_f[NUM_INSTRS+1:INDEX_BITS+2]);
assign state_f = (tag_matched & valid) ? buffer_entry[TAG_BITS+1:TAG_BITS] : pht[ghr];
assign predict_taken = state_f[1];
assign addr_from_btb = {(32-NUM_INSTRS)'(0), buffer_entry[NUM_INSTRS+TAG_BITS-1:TAG_BITS]} << 2;
assign valid = (is_jalr) ? buffer_entry[BTB_ENTRY_SIZE-1] : buffer_entry[BHT_ENTRY_SIZE-1];
assign prediction_wrong = state_e[1] != br_actual;
assign flush_f = prediction_wrong | jalr_addr_reqd_e;


always_comb begin
    if (prediction_made_e & prediction_wrong) begin			// If branch prediction was wrong
		prediction_made_f = 1'b0;
		jalr_addr_reqd_f = 1'b0;
	end
	else if (jalr_addr_reqd_e) begin						// If we want calculated address of JALR
		prediction_made_f = 1'b0;
		jalr_addr_reqd_f = 1'b0;
	end
	else if (is_jal) begin
		prediction_made_f = 1'b0;
		jalr_addr_reqd_f = 1'b0;
	end
	else if (is_branch) begin
		prediction_made_f = 1'b1;
		jalr_addr_reqd_f = 1'b0;
	end
	else if (is_jalr) begin
		if (tag_matched & valid)
			jalr_addr_reqd_f = 1'b0;
		else
			jalr_addr_reqd_f = 1'b1;
		prediction_made_f = 1'b0;
	end
	else begin
		prediction_made_f = 1'b0;
		jalr_addr_reqd_f = 1'b0;
	end
end


// Target-PC-Mux selector values
always_comb begin
    if (prediction_made_e & prediction_wrong)		// If branch prediction was wrong
		mux_sel = 3'b011;
	else if (jalr_addr_reqd_e)						// If we want calculated address of JALR
		mux_sel = 3'b010;
	else if (is_jal)
		mux_sel = 3'b000;
	else if (is_branch) begin
		if (predict_taken)
			mux_sel = 3'b000;
		else
			mux_sel = 3'b100;
	end
	else if (is_jalr) begin
		if (tag_matched & valid)
			mux_sel = 3'b001;
		else
			mux_sel = 3'b100;
	end
	else
		mux_sel = 3'b100;
end

// Target PC calculation mux
always_comb begin
	case (mux_sel)
        3'b000: target_pc = pc_f + offset;
        3'b001: target_pc = addr_from_btb;
        3'b010: target_pc = alu_result_e;
        3'b011: target_pc = opposite_dir;
        3'b100: target_pc = pc_f + 4;
    endcase
end

// Updating BHT Entry State
always_comb begin
	if (state_e == 2'b00)
		new_state = (br_actual) ? 2'b01 : 2'b00;
	else if (state_e == 2'b01)
		new_state = (br_actual) ? 2'b10 : 2'b00;
	else if (state_e == 2'b10)
		new_state = (br_actual) ? 2'b11 : 2'b01;
	else if (state_e == 2'b11)
		new_state = (br_actual) ? 2'b11 : 2'b10;
end


// Move signals from fetch to execute stage
always_ff @ (posedge clk) begin
	if (!reset) begin
		state_e           <= 2'b00;
		prediction_made_e <= 1'b0;
		jalr_addr_reqd_e  <= 1'b0;
	end
    else if (!stall) begin
	    state_e           <= state_f;
	    prediction_made_e <= prediction_made_f;
	    jalr_addr_reqd_e  <= jalr_addr_reqd_f;
	end
end

// BHT, BTB, GHR update
always_ff @ (posedge clk) begin
	if (!reset) begin
		for (int i = 0; i < TABLE_DEPTH; i++) begin
            bht[i] = (BHT_ENTRY_SIZE)'(0);
            btb[i] = (BTB_ENTRY_SIZE)'(0);
        end
        ghr <= (GHR_SIZE)'(0);
	end else if (!stall) begin
        if (jalr_addr_reqd_e)
        	btb[index_e] <= {1'b1, alu_result_e[NUM_INSTRS+1:2], pc_e[NUM_INSTRS+1:INDEX_BITS+2]};
        if (prediction_made_e) begin
        	bht[index_e] <= {1'b1, new_state, pc_e[NUM_INSTRS+1:INDEX_BITS+2]};
	       	ghr <= {ghr[GHR_SIZE-2:0], br_actual};
	    end
	end
end

// Update the outputs to IF stage
assign bp2if_o.pc_new = target_pc;
assign bp2if_o.flush  = flush_f;
assign bp2if_o.pc_req = ((mux_sel == 3'b000) | (mux_sel == 3'b001) |(mux_sel == 3'b010) |
                         (mux_sel == 3'b011) | (mux_sel == 3'b100));

endmodule
