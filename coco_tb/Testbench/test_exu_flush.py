import cocotb
import utilities
from parameters import *
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random

flush_stall = 0

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1


async def flush_model(dut, flush, state):
    """Model of the functionality of the flush module"""
    global flush_stall
    for cycle in range(15):
        await RisingEdge(dut.hclk)
        if(int(str(dut.cycle_cnt.value),2) == 4):
            if state == 0:
                if flush == 1:
                    state = 1
                elif flush == 2:
                    state = 2
                else:
                    state = 0
            elif state == 1:
                if flush == 2:
                    state = 2
                else:
                    state = 0
            elif state == 2:
                state = 1
        if(state == 0):
            flush_stall = 0
        else:
            flush_stall = 1

    
async def initialize_values(dut, flush, state):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # sys reset
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

@cocotb.test()
async def exu_flush_cocotb(dut):
    """Testing flush cycle 2"""
    # Define our variabless
    flush = 1
    state = 0

    # Assign values to the DUT
    dut.flush.value = flush

    await initialize_values(dut, flush, state)

    # Get the results from the model
    result = flush_stall

    # Get the actual results from the simulation
    actual = int(str(dut.flush_stall.value),2)

    # Report the data
    dut._log.info("flush_stall is %s", actual)
    dut._log.info("Result should be %s", result)
    assert actual == result, f"Flush result is incorrect: {actual} != {result}"

@cocotb.test()
async def exu_flush_randomized_test(dut):
    """Test 20 random calls with random reg and imm values"""
    for i in range(20):
        # Initialize the values
        # Set random values for the register data, immediate, and call
        flush = random.randint(0, 2)
        state = 0

        # Assign the values to the dut
        dut.flush.value = flush
        await initialize_values(dut, flush, state)

        # Get the results from the model
        result = flush_stall

        # Get the actual results from the simulation
        actual = int(str(dut.flush_stall.value),2)
        
        # Report the data
        dut._log.info("Running Test %s", i)
        dut._log.info("started with flush %s", flush)
        dut._log.info("flush_stall is %s", actual)
        dut._log.info("Result should be %s", result)
        dut._log.info("____________________________________")
        
        assert actual == result, f"Branch result is incorrect for flush {flush}, we got {actual} when it should be {result}"


