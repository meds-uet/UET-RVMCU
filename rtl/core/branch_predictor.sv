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
    parameter int BHT_ENTRY_SIZE =  TAG_BITS + 2,				// 2 branch state bits + Tag bits
    parameter int BTB_ENTRY_SIZE =  NUM_INSTRS + TAG_BITS + 1 	// 1 Valid bit + Jump address >> 2 + Tag bits

)(

	input 	logic 					clk,
	input 	logic					reset,
	input 	logic [31:0] 			pc_f,
	input 	logic [31:0]			instruction,
	input 	logic [31:0]			offset,
	input 	logic [31:0] 			pc_e, 
	input 	logic [31:0]			alu_result_e,	
	input 	logic					br_actual,
	input	logic					stall,
	output 	type_bp2if_s            bp2if_o 	
);


	logic [BHT_ENTRY_SIZE-1:0] 		bht [TABLE_DEPTH-1:0];
	logic [BTB_ENTRY_SIZE-1:0] 		btb [TABLE_DEPTH-1:0];
	logic [6:0] 					opcode;
	logic [INDEX_BITS-1:0] 			index_f;
	logic [INDEX_BITS-1:0]			index_e;
	logic [BTB_ENTRY_SIZE-1:0] 		buffer_entry;
	logic [31:0] 					addr_from_btb;
	logic [31:0]					opposite_dir;
	logic [TAG_BITS-1:0] 			tag;
	logic [2:0]						mux_sel;
	logic [1:0] 					new_state;
	logic [1:0]		 				state_f;
	logic [1:0] 					state_e;
	logic 							prediction_made_f;
	logic 							prediction_made_e;
	logic							jalr_addr_reqd_f;
	logic							jalr_addr_reqd_e;
	logic							prediction_wrong;
	logic 							valid;
	logic							predict_taken;
	logic 							is_branch;
	logic							is_jal;
	logic							is_jalr;
	logic					        flush_f;
    logic [31:0] 			        target_pc;


	assign opcode = instruction[6:0];
	assign index_f = pc_f[INDEX_BITS+1:2];
	assign index_e = pc_e[INDEX_BITS+1:2];

	assign is_branch = (opcode == 7'b1100011);
	assign is_jal = (opcode == 7'b1101111);
	assign is_jalr = (opcode == 7'b1100111);

	assign buffer_entry = (is_jalr) ? btb[index_f] : {(BTB_ENTRY_SIZE-BHT_ENTRY_SIZE)'(0), bht[index_f]};
	assign tag = buffer_entry[TAG_BITS-1:0];
	assign tag_matched = (tag == pc_f[NUM_INSTRS+1:INDEX_BITS+2]);
	assign state_f = (tag_matched) ? buffer_entry[TAG_BITS+1:TAG_BITS] : 2'b01;
	assign predict_taken = state_f[1];
	assign addr_from_btb = {(32-NUM_INSTRS)'(0), buffer_entry[NUM_INSTRS+TAG_BITS-1:TAG_BITS]} << 2;
	assign valid = buffer_entry[BTB_ENTRY_SIZE-1];
	assign prediction_wrong = state_e[1] != br_actual;
	assign flush_f = prediction_wrong | jalr_addr_reqd_e;
	

	always_comb begin

        if (prediction_made_e & prediction_wrong) begin			// If branch prediction was wrong
			mux_sel = 3'b011;
			prediction_made_f = 1'b0;
			jalr_addr_reqd_f = 1'b0;
		end
		else if (jalr_addr_reqd_e) begin						// If we want calculated address of JALR
			mux_sel = 3'b010;
			prediction_made_f = 1'b0;
			jalr_addr_reqd_f = 1'b0;
		end
		else if (is_jal) begin
			mux_sel = 3'b000;
			prediction_made_f = 1'b0;
			jalr_addr_reqd_f = 1'b0;
		end
		else if (is_branch) begin
			if (tag_matched & predict_taken)
				mux_sel = 3'b000;
			else
				mux_sel = 3'b100;
			prediction_made_f = 1'b1;
			jalr_addr_reqd_f = 1'b0;
		end
		else if (is_jalr) begin
			if (tag_matched & valid) begin
				mux_sel = 3'b001;
				jalr_addr_reqd_f = 1'b0;
			end
			else begin
				mux_sel = 3'b100;
				jalr_addr_reqd_f = 1'b1;
			end
			prediction_made_f = 1'b0;
		end
		else begin
			mux_sel = 3'b100;
			prediction_made_f = 1'b0;
			jalr_addr_reqd_f = 1'b0;
		end

		case (mux_sel)
            3'b000: target_pc = pc_f + offset;
            3'b001: target_pc = addr_from_btb;
            3'b010: target_pc = alu_result_e;
            3'b011: target_pc = opposite_dir;
            3'b100: target_pc = pc_f + 4;
        endcase

		// Updating BHT Entry State
		if (state_e == 2'b00)
			new_state = (br_actual) ? 2'b01 : 2'b00;
		else if (state_e == 2'b01)
			new_state = (br_actual) ? 2'b10 : 2'b00;
		else if (state_e == 2'b10)
			new_state = (br_actual) ? 2'b11 : 2'b01;
		else if (state_e == 2'b11)
			new_state = (br_actual) ? 2'b11 : 2'b10;
    end

    always_ff @ (posedge clk)
	begin
		if (!reset) begin
			state_e <= 2'b0;
			prediction_made_e <= 1'b0;
			jalr_addr_reqd_e <= 1'b0;
			opposite_dir <= 32'b0;

			for (int i = 0; i < TABLE_DEPTH; i++) begin
                bht[i] = {2'b01, (TAG_BITS)'(0)};						// Weak Not Taken at reset
                btb[i] = (BTB_ENTRY_SIZE)'(0);
            end
		end

        else if (~stall) begin
	        if (jalr_addr_reqd_e)
	        	btb[index_e] <= {1'b1, alu_result_e[NUM_INSTRS+1:2], pc_e[NUM_INSTRS+1:INDEX_BITS+2]};
	        if (prediction_made_e)
	        	bht[index_e] <= {new_state, pc_e[NUM_INSTRS+1:INDEX_BITS+2]};

	        state_e <= state_f;							// Move signals from fetch to execute stage
	        prediction_made_e <= prediction_made_f;
	        jalr_addr_reqd_e <= jalr_addr_reqd_f;

			if (is_branch) begin	
				if (predict_taken)
					opposite_dir <= pc_f + 4;
				else
					opposite_dir <= pc_f + offset;
			end
		end
	end


assign bp2if_o.pc_new = target_pc;
assign bp2if_o.flush  = flush_f;
assign bp2if_o.pc_req = ((mux_sel == 3'b000) | (mux_sel == 3'b001) |(mux_sel == 3'b010) |
                         (mux_sel == 3'b011) | (mux_sel == 3'b100));

endmodule
