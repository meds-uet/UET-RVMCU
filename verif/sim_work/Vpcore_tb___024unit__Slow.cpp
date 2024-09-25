// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpcore_tb.h for the primary calling header

#include "verilated.h"

#include "Vpcore_tb__Syms.h"
#include "Vpcore_tb___024unit.h"

void Vpcore_tb___024unit___ctor_var_reset(Vpcore_tb___024unit* vlSelf);

Vpcore_tb___024unit::Vpcore_tb___024unit(Vpcore_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpcore_tb___024unit___ctor_var_reset(this);
}

void Vpcore_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpcore_tb___024unit::~Vpcore_tb___024unit() {
}
