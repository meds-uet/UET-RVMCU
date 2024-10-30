`define DELAY7SEG  30000 // 200000 for 100MHz, 100000 for 50MHz, 60000 for 30MHz
`define COUNT_WIDTH $clog2 (`DELAY7SEG)
module m_7segcon(
    input  logic                              clk,
    input  logic                              rst_n,
    input  logic [31:0]                       sev_seg_disp,
    output logic  [7:0]                       sev_cathode,
    output logic  [7:0]                       sev_anode
);

logic                              seg_clk;
logic [`COUNT_WIDTH-1:0]           seg_counter;
logic [3:0]                        data_disp;
logic [3:0]                        disp_count;

// slower clock (500Hz) for seven segments display
always_ff @(posedge clk) begin
    if (!rst_n) begin
        seg_clk     <= 0;
        seg_counter <= 0;
    end else begin
        seg_counter <=  seg_counter + 'b1;
        if (seg_counter == (`DELAY7SEG-1)) begin
            seg_clk <= ~ seg_clk;
            seg_counter <= 'b0;
        end
    end
end

always_ff @(posedge seg_clk) begin
    if (!rst_n) begin
        disp_count <= 0;
    end else begin
        disp_count <=  disp_count + 4'h1;
        if (disp_count == 4'h7) begin
            disp_count <= 4'h0;
        end
    end
end
//selection for which data bits to display on the respective segment
always_comb begin
        case (disp_count)
        0: data_disp = sev_seg_disp[3:0];
        1: data_disp = sev_seg_disp[7:4];
        2: data_disp = sev_seg_disp[11:8];
        3: data_disp = sev_seg_disp[15:12]; 
        4: data_disp = sev_seg_disp[19:16]; 
        5: data_disp = sev_seg_disp[23:20]; 
        6: data_disp = sev_seg_disp[27:24]; 
        7: data_disp = sev_seg_disp[31:28];
        default: data_disp = 4'h0;
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
    case (disp_count)
    0: sev_anode = 8'b1111_1110;
    1: sev_anode = 8'b1111_1101;
    2: sev_anode = 8'b1111_1011;
    3: sev_anode = 8'b1111_0111; 
    4: sev_anode = 8'b1110_1111; 
    5: sev_anode = 8'b1101_1111; 
    6: sev_anode = 8'b1011_1111; 
    7: sev_anode = 8'b0111_1111; 
    default: sev_anode = 8'b1111_1111; 
    endcase
end
    
endmodule