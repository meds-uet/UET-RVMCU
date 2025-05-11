module ahb_slave_memory
(
	input         HCLK,
	input         HRESETn,
	input         HSEL,
	input [9:0]   HADDR,
	input         HWRITE,
	input [1:0]   HTRANS,
  input [2:0]   HSIZE,
  input [2:0]   HBURST, 
	input [31:0]  HWDATA,

	output        HREADY,
	output [1:0]  HRESP,
	output [31:0] HRDATA
);

localparam ADDR_SPACE = 10;

reg [9:0] addr_next, addr_reg;
reg [31:0] mem[2**ADDR_SPACE];
reg HREADY_next, HREADY_reg;
reg HRESP_next, HRESP_reg;
reg [31:0] HRDATA_next, HRDATA_reg;
reg [31:0] mem_wdata_reg, mem_wdata_next;

assign HRESP = HRESP_reg;
assign HRDATA = HRDATA_reg;
assign HREADY = HREADY_reg;

always @(posedge HCLK) begin
  if (~HRESETn) begin
    HREADY_reg <= 1;
    HRESP_reg <= 0;
    HRDATA_reg <= 0;
    addr_reg <= 0;
    mem_wdata_reg <= 0;
  end else begin
    HREADY_reg <= HREADY_next;
    HRESP_reg <= HRESP_next;
    HRDATA_reg <= HRDATA_next;
    addr_reg <= addr_next;
    mem_wdata_reg <= mem_wdata_next;

    if (HSEL && HTRANS[1] && HWRITE) begin
      mem[addr_next] <= mem_wdata_next; 
    end
  end
end

always @(*) 
begin
  HREADY_next = 1;
  HRESP_next = 0;
  HRDATA_next = HRDATA_reg; 
  addr_next = addr_reg;
  mem_wdata_next = mem_wdata_reg;

  if (HSEL && HTRANS[1]) begin  // NONSEQ or SEQ
    addr_next = HADDR;
    mem_wdata_next = HWDATA;

    if (HWRITE) begin
      // see clocked block
      //HRDATA_next = mem_wdata_next;
    end else begin
      HRDATA_next = mem[HADDR]; 
    end
  end
end

// Delayed operations
//
// always @(posedge HCLK) begin
//   if (~HRESETn) begin
//     HREADY_reg <= 1;
//     HRESP_reg  <= 0;
//     HRDATA_reg <= 0;
//     //addr_reg   <= 0;
//   end else begin
//     HREADY_reg <= 1;
//     HRESP_reg  <= 0;
//     //addr_reg   <= HADDR;

//     if (HSEL && HTRANS[1]) begin
//       if (HWRITE)
//         mem[HADDR] <= HWDATA;
//       else
//         HRDATA_reg <= mem[HADDR];
//     end
//   end
// end

endmodule