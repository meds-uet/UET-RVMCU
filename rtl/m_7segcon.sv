`define DELAY7SEG  100000 // 200000 for 100MHz, 100000 for 50MHz
`define COUNT_WIDTH $clog2 (DELAY7SEG)
module m_7segcon(
    input  logic                              clk,
    input  logic                              rst_n,
    input  logic [31:0]                       sev_seg_disp,
    output logic  [7:0]                       sev_cathode,
    output logic  [7:0]                       sev_anode
);

logic                              seg_clk;
logic [COUNT_WIDTH-1:0]            seg_counter;
logic [3:0]                        data_disp;

// slower clock (500Hz) for seven segments display
always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        seg_clk     <= 0;
        seg_counter <= 0;
    end else begin
        seg_counter <=  seg_counter + COUNT_WIDTH'b1;
        if (seg_counter == DELAY7SEG) begin
            seg_clk <= ~ seg_clk;
            seg_counter <= COUNT_WIDTH'b0;
        end
    end
end

//selection for which data bits to display on the respective segment
always_comb begin
        case ({seg_counter[COUNT_WIDTH-1],seg_counter[COUNT_WIDTH-2],seg_counter[COUNT_WIDTH-1]})
        0: data_disp = sev_seg_disp[3:0];
        1: data_disp = sev_seg_disp[7:4];
        2: data_disp = sev_seg_disp[11:8];
        3: data_disp = sev_seg_disp[15:12]; 
        4: data_disp = sev_seg_disp[19:16]; 
        5: data_disp = sev_seg_disp[23:20]; 
        6: data_disp = sev_seg_disp[26:23]; 
        7: data_disp = sev_seg_disp[31:27]; 
        endcase
    end

// Seven Segment LEDs combination for displaying values
always_comb begin
case(data_disp)
    4'b0000: sev_cathode = 8'b00000011; // "0"     
    4'b0001: sev_cathode = 8'b10011111; // "1" 
    4'b0010: sev_cathode = 8'b00100101; // "2" 
    4'b0011: sev_cathode = 8'b00001101; // "3" 
    4'b0100: sev_cathode = 8'b10011001; // "4" 
    4'b0101: sev_cathode = 8'b01001001; // "5" 
    4'b0110: sev_cathode = 8'b01000001; // "6" 
    4'b0111: sev_cathode = 8'b00011111; // "7" 
    4'b1000: sev_cathode = 8'b00000001; // "8"     
    4'b1001: sev_cathode = 8'b00001001; // "9"
    4'b1010: sev_cathode = 8'b00010001; // "A"     
    4'b1011: sev_cathode = 8'b11000001; // "b"     
    4'b1100: sev_cathode = 8'b01100011; // "C"     
    4'b1101: sev_cathode = 8'b10000101; // "d"     
    4'b1110: sev_cathode = 8'b01100001; // "E"     
    4'b1111: sev_cathode = 8'b01110001; // "F"     
    default: sev_cathode = 8'b11111111; // "-"
    endcase
end

//anode selection for turning one segment on at a time
always_comb begin
    case ({seg_counter[COUNT_WIDTH-1],seg_counter[COUNT_WIDTH-2],seg_counter[COUNT_WIDTH-1]})
    0: sev_anode = 8'b11111110;
    1: sev_anode = 8'b11111101;
    2: sev_anode = 8'b11111011;
    3: sev_anode = 8'b11110111; 
    4: sev_anode = 8'b11101111; 
    5: sev_anode = 8'b11011111; 
    6: sev_anode = 8'b10111111; 
    7: sev_anode = 8'b01111111; 
    endcase
end
    
endmodule