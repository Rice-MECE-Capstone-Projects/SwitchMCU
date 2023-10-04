// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAHBS_SWC_TB__SYMS_H_
#define _VAHBS_SWC_TB__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vahbs_swc_tb.h"

// SYMS CLASS
class Vahbs_swc_tb__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vahbs_swc_tb*                  TOPp;
    
    // CREATORS
    Vahbs_swc_tb__Syms(Vahbs_swc_tb* topp, const char* namep);
    ~Vahbs_swc_tb__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
