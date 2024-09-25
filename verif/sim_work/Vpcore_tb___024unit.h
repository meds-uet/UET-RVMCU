// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpcore_tb.h for the primary calling header

#ifndef VERILATED_VPCORE_TB___024UNIT_H_
#define VERILATED_VPCORE_TB___024UNIT_H_  // guard

#include "verilated.h"

class Vpcore_tb__Syms;

class Vpcore_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpcore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpcore_tb___024unit(Vpcore_tb__Syms* symsp, const char* v__name);
    ~Vpcore_tb___024unit();
    VL_UNCOPYABLE(Vpcore_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
