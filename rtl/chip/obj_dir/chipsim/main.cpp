#include <QCoreApplication>
#include "rtl_headers.h"

quint32 last_regfile[32] = {0};
quint32 last_pc = 0;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Setup context, defaults, and parse command line
    Verilated::debug(0);
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    contextp->traceEverOn(true);
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating
    const std::unique_ptr<Vchip_tb> topp{new Vchip_tb{contextp.get()}};

    // Simulate until $finish
    while (!contextp->gotFinish()) {
        // Evaluate model
        topp->eval();

        // Check values of the regs
        for(int i = 0; i < 32; i++){
            if(last_regfile[i] != quint32(topp->rootp->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[i])){
                qDebug() << "pc = " << quint32(topp->rootp->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__pc) << "gpr" << i << ":" << QString::number(last_regfile[i]) + ">>" + QString::number(topp->rootp->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[i]);
                last_regfile[i] = quint32(topp->rootp->chip_tb__DOT__chip_top_inst__DOT__core_top_swc_inst__DOT__regfile_swc_inst__DOT__regfile[i]);
            }
        }

        // Advance time
        if (!topp->eventsPending()) break;
        contextp->time(topp->nextTimeSlot());
    }

    if (!contextp->gotFinish()) {
        VL_DEBUG_IF(VL_PRINTF("+ Exiting without $finish; no events left\n"););
    }

    // Final model cleanup
    topp->final();

    return a.exec();
}
