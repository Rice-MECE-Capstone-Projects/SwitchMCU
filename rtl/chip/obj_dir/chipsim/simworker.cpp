#include "simworker.h"
#include "verilated.h"

#include <QImage>
#include <QDebug>
#include <QElapsedTimer>

SimWorker::SimWorker(QObject *parent)
    : QObject{parent}
{
}

void SimWorker::processCycles(int cycles)
{
    for(int i = 0; i < cycles; i++){
        processSingleCycle();
    }
    updateAll();
    emit processFinished();
}

void SimWorker::processStages(int stages)
{
    for(int i = 0; i < stages; i++){
        do{
            processSingleCycle();
        }while(quint32(topp->chip_tb->cycle_cnt) != 1);
    }
    updateAll();
    emit processFinished();
}

void SimWorker::updateAll()
{
    updatePixArray();
    updateRegs();
    updateInsts();
}

void SimWorker::updatePixArray()
{
    for(int i = 0; i < 1024*768; i++) {
        mPixArray[3*i]   = quint32(topp->chip_tb->vram[i]) >> 16 ;
        mPixArray[3*i+1] = quint32(topp->chip_tb->vram[i]) >> 8  ;
        mPixArray[3*i+2] = quint32(topp->chip_tb->vram[i]) >> 0  ;
    }
}

void SimWorker::processSingleCycle()
{
    for(int i = 0; i < 2; i++){
        topp->eval();
//        if (!topp->eventsPending()) /*timer->stop()*/;
        contextp->time(topp->nextTimeSlot());
        fflush(stdout);
        topp->chip_tb->vlSymsp->__Vm_dumperp->flush();
    }
    (*mCycleProcessed)++;
}

void SimWorker::cleanupSimulation()
{
    topp.reset();
    contextp.reset();
    delete[] mPixArray;
    delete mCycleProcessed;
}

void SimWorker::updateRegs()
{
    mPcReg = quint32(topp->chip_tb->pc);
    for(int i = 0; i < 32; i++){
        mGprRegs[i] = quint32(topp->chip_tb->exu_top_swc_inst->regfile_swc_inst->regfile[i]);
    }
}

void SimWorker::updateInsts()
{
    mInsts[0] = quint32(topp->chip_tb->inst_ifu_out);
    mInsts[1] = quint32(topp->chip_tb->inst_dec_out);
    mInsts[2] = quint32(topp->chip_tb->inst_exu_out);
    qDebug() << quint32(topp->chip_tb->inst_ifu_out);
}

void SimWorker::initSimulation() {
    cleanupSimulation();

    Verilated::debug(0);
    contextp = std::make_unique<VerilatedContext>();
    contextp->traceEverOn(true);

    topp = std::make_unique<Vchip_tb>(contextp.get());

    mPixArray = new uchar[1024*768*3];
    memset(mPixArray, 0, 1024*768*3 * sizeof(uchar));
    mCycleProcessed = new mpz_class(0);
    mPcReg = 0;
    std::fill(mGprRegs, mGprRegs + 32, 0);

    emit processFinished();
}
