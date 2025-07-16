# 2-Bit Branch Predictor with BHT & BTB

## 📌 Overview

This is a System Verilog implementation of a **2-bit dynamic branch predictor** that utilizes both a **Branch History Table (BHT)** and a **Branch Target Buffer (BTB)**. The module aims to reduce pipeline stalls by predicting the outcome and target address of branch and jump instructions.

---

## 🔧 Features

- 2-bit saturating counter for branch prediction
- BHT stores prediction states and tags for branch instructions
- BTB stores valid bits, computed target addresses, and tags for indirect jumps (`JALR`)
- Supports:
  - Conditional Branches (`BEQ`, `BNE`, etc.)
  - Unconditional Jumps (`JAL`, `JALR`)
- Handles misprediction correction and state update

---

## Prediction Logic

### Instruction Type Detection
- **Branch**: `opcode == 1100011`
- **JAL**: `opcode == 1101111`
- **JALR**: `opcode == 1100111`

### 2-Bit FSM Prediction
- `00` – Strong Not Taken  
- `01` – Weak Not Taken  
- `10` – Weak Taken  
- `11` – Strong Taken  
- Prediction is taken if state is `10` or `11`

### Target PC Selection (via `mux_sel`)
| `mux_sel` | Target PC Source       |                                                                                              |
|-----------|------------------------|----------------------------------------------------------------------------------------------|
| `000`     | `pc_f + offset`        |  `In case of JAL and BRANCH which is predicted to be taken`                                  |
| `001`     | `addr_from_btb`        |  `In case of valid jump address for JALR present in BTB`                                     |
| `010`     | `alu_result_e`         |  `In case of JALR jump address not present in BTB. Calculate and fetch address from next cycle`   |
| `011`     | `opposite_dir`         |  `If branch prediction was wrong, go to the other possible address`                          |
| `100`     | `pc_f + 4`             |  `Don't jump, just move onto next instruction`                                               |

---

## Parameter Description

| Parameter         | Description                                                                 |
|------------------|-----------------------------------------------------------------------------|
| `NUM_INSTRS`     | Log2 of total instructions. Selects between 16 (for FPGA) or 19 (for Simulation). |
| `INDEX_BITS`     | Number of bits used for indexing into BHT/BTB tables. Default: 7 (index into 128 entries). |
| `TABLE_DEPTH`    | Number of entries in BHT and BTB tables = 2^`INDEX_BITS`.                   |
| `TAG_BITS`       | Number of bits used for tag matching = `NUM_INSTRS` - `INDEX_BITS`.         |
| `BHT_ENTRY_SIZE` | Entry size for BHT = `TAG_BITS + 2` [2-bit state, Tag].                   |
| `BTB_ENTRY_SIZE` | Entry size for BTB = `NUM_INSTRS + TAG_BITS + 1` [Valid bit, Saved Address, Tag]. |

---

## I/O Ports

| Signal            | Direction | Width     | Description |
|------------------|-----------|-----------|-------------|
| `clk`            | input     | 1         | Clock       |
| `reset`          | input     | 1         | Active-low synchronous reset |
| `stall`          | input     | 1         | Pipeline stall signal D -x-> E         |
| `pc_f`           | input     | 32        | Program counter at fetch stage |
| `instruction`    | input     | 32        | Instruction at fetch stage    |
| `offset`         | input     | 32        | Offset for branch & jal (Extended immediate)   |
| `pc_e`           | input     | 32        | Program counter at execute stage |
| `alu_result_e`   | input     | 32        | ALU result at execute stage   |
| `br_actual`      | input     | 1         | Actual outcome of branch (taken/not taken) |
| `target_pc`      | output    | 32        | Predicted target PC           |
| `flush_f`        | output    | 1         | Flush signal in case of wrong prediction and during JALR address calculation |

---

## How It Works

### Prediction (Fetch Stage):
- **Indexing:** `pc_f` is used to compute index into BHT and BTB.
- **BHT:** Provides prediction (`Taken`/`Not Taken`) using 2-bit counter.
- **BTB:** Provides target address and validity.
- **Tag Match:** Ensures entry in BHT/BTB is valid for current `pc_f`.
- **MUX Logic:** Chooses the next `target_pc` based on instruction type and prediction.

### Update (Execute Stage):
- **Update BHT:** Based on actual branch outcome, 2-bit FSM is updated.
- **Update BTB:** For `jalr`, BTB is updated with the calculated jump address.
- **Flush Logic:** Generates flush if prediction was wrong or jalr address was being calculated.



## Typical Use Case

- Integrate into a pipelined processor’s frontend (fetch stage).
- Connect outputs to fetch logic and use `flush_f` for misprediction recovery.
- Use `target_pc` to update the PC based on predicted flow.

---
