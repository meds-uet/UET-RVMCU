`timescale 1ns/1ps

module m1s1_slave_tb;
    logic         HRESETn
  ; logic         HCLK
  ; logic         M0_HBUSREQ
  ; logic         M0_HGRANT
  ; logic  [31:0] M0_HADDR
  ; logic  [ 1:0] M0_HTRANS
  ; logic  [ 2:0] M0_HSIZE
  ; logic  [ 2:0] M0_HBURST
  ; logic  [ 3:0] M0_HPROT
  ; logic         M0_HLOCK
  ; logic         M0_HWRITE
  ; logic  [31:0] M0_HWDATA
  ; logic         M1_HBUSREQ
  ; logic         M1_HGRANT
  ; logic  [31:0] M1_HADDR
  ; logic  [ 1:0] M1_HTRANS
  ; logic  [ 2:0] M1_HSIZE
  ; logic  [ 2:0] M1_HBURST
  ; logic  [ 3:0] M1_HPROT
  ; logic         M1_HLOCK
  ; logic         M1_HWRITE
  ; logic  [31:0] M1_HWDATA
  ; logic  [31:0] M_HRDATA
  ; logic  [ 1:0] M_HRESP
  ; logic         M_HREADY
  ; logic  [31:0] S_HADDR
  ; logic         S_HWRITE
  ; logic  [ 1:0] S_HTRANS
  ; logic  [ 2:0] S_HSIZE
  ; logic  [ 2:0] S_HBURST
  ; logic  [31:0] S_HWDATA
  ; logic  [ 3:0] S_HPROT
  ; logic         S_HREADY
  ; logic  [ 3:0] S_HMASTER
  ; logic         S_HMASTLOCK
  ; logic         S0_HSEL
  ; logic         S0_HREADY
  ; logic  [ 1:0] S0_HRESP
  ; logic  [31:0] S0_HRDATA
  ; logic  [15:0] S0_HSPLIT
  ; logic         S1_HSEL
  ; logic         S1_HREADY
  ; logic  [ 1:0] S1_HRESP
  ; logic  [31:0] S1_HRDATA
  ; logic  [15:0] S1_HSPLIT
  ; logic         REMAP

  // Unused signals
  ; assign M1_HBUSREQ = 0
  //; assign M1_HGRANT = 0
  ; assign M1_HADDR = 32'b0
  ; assign M1_HTRANS = 2'b00
  ; assign M1_HSIZE = 3'b000
  ; assign M1_HBURST = 3'b000
  ; assign M1_HPROT = 4'b0000
  ; assign M1_HLOCK = 0
  ; assign M1_HWRITE = 0
  ; assign M1_HWDATA = 32'b0
  ; assign S1_HSEL = 0
  ; assign S1_HREADY = 1
  ; assign S1_HRESP = 2'b0
  ; assign S1_HRDATA = 32'b0
  ; assign S1_HSPLIT = 16'b0
  ; assign REMAP = 0
  ; 

  amba_ahb_m2s2 dut (
    .HRESETn     (HRESETn),
    .HCLK        (HCLK),
    .M0_HBUSREQ  (M0_HBUSREQ),
    .M0_HGRANT   (M0_HGRANT),
    .M0_HADDR    (M0_HADDR),
    .M0_HTRANS   (M0_HTRANS),
    .M0_HSIZE    (M0_HSIZE),
    .M0_HBURST   (M0_HBURST),
    .M0_HPROT    (M0_HPROT),
    .M0_HLOCK    (M0_HLOCK),
    .M0_HWRITE   (M0_HWRITE),
    .M0_HWDATA   (M0_HWDATA),
    .M1_HBUSREQ  (M1_HBUSREQ),
    .M1_HGRANT   (M1_HGRANT),  
    .M1_HADDR    (M1_HADDR),
    .M1_HTRANS   (M1_HTRANS),
    .M1_HSIZE    (M1_HSIZE),
    .M1_HBURST   (M1_HBURST),
    .M1_HPROT    (M1_HPROT),
    .M1_HLOCK    (M1_HLOCK),
    .M1_HWRITE   (M1_HWRITE),
    .M1_HWDATA   (M1_HWDATA),
    .M_HRDATA    (M_HRDATA),
    .M_HRESP     (M_HRESP),
    .M_HREADY    (M_HREADY),
    .S_HADDR     (S_HADDR),
    .S_HWRITE    (S_HWRITE),
    .S_HTRANS    (S_HTRANS),
    .S_HSIZE     (S_HSIZE),
    .S_HBURST    (S_HBURST),
    .S_HWDATA    (S_HWDATA),
    .S_HPROT     (S_HPROT),
    .S_HREADY    (S_HREADY),
    .S_HMASTER   (S_HMASTER),
    .S_HMASTLOCK (S_HMASTLOCK),
    .S0_HSEL     (S0_HSEL),
    .S0_HREADY   (S0_HREADY),
    .S0_HRESP    (S0_HRESP),
    .S0_HRDATA   (S0_HRDATA),
    .S0_HSPLIT   (S0_HSPLIT),
    .S1_HSEL     (S1_HSEL),
    .S1_HREADY   (S1_HREADY),
    .S1_HRESP    (S1_HRESP),
    .S1_HRDATA   (S1_HRDATA),
    .S1_HSPLIT   (S1_HSPLIT),
    .REMAP       (REMAP)
  );

  ahb_slave_memory mem (
    .HCLK(HCLK),
    .HRESETn(HRESETn),
    .HSEL(S0_HSEL),
    .HADDR(S_HADDR[9:0]),
    .HWRITE(S_HWRITE),
    .HTRANS(S_HTRANS),
    .HSIZE(S_HSIZE),
    .HBURST(S_HBURST),
    .HWDATA(S_HWDATA),
    .HREADY(S0_HREADY),
    .HRESP(S0_HRESP),
    .HRDATA(S0_HRDATA)
  );

  initial HCLK = 0;
  always #5 HCLK = ~HCLK;

  initial begin
    // Reset
    M0_HTRANS = 2'b00; // during reset all masters must set this to IDLE
    HRESETn = 0;
    #20 
    HRESETn = 1;

    // M0 requests bus access
    $display("Time: %0t | M0_HGRANT waiting", $time);
    M0_HBUSREQ = 1;
    wait (M0_HGRANT == 1);
    $display("Time: %0t | M0_HGRANT received!", $time);

    @(posedge HCLK);
    // Control
    M0_HADDR = 32'h00000000;
    M0_HTRANS = 2'b10; // nonseq
    M0_HSIZE = 3'b010; // word
    M0_HBURST = 3'b000;
    M0_HPROT = 4'b0011;
    M0_HLOCK = 0;
    M0_HWRITE = 1;
    @(posedge HCLK); // Address Phase 
    M0_HWDATA = 32'hABCD1234;
    //M0_HTRANS = 2'b00; // idle
    @(posedge HCLK); // Data phase 
    $display("Time: %0t | Here you should see your data in the HRDATA bus", $time);

    M0_HWRITE = 0;
    // Read back the same address
    @(posedge HCLK);
    //M0_HTRANS = 2'b10;
    @(posedge HCLK); // Address Phase
    //M0_HADDR  = 32'h00000001;
    //M0_HTRANS = 2'b00;
    @(posedge HCLK); // Data Phase
      if (M_HRDATA !== 32'hABCD1234) begin
        $display("ASSERTION FAILED: Expected 0xABCD1234, got %h", M_HRDATA);
        $fatal;
      end else begin
        $display("ASSERTION PASSED: Readback data = %h", M_HRDATA);
      end

      #20 $finish;
  end

endmodule
