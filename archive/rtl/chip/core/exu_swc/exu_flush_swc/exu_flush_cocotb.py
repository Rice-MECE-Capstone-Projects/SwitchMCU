import cocotb
from cocotb.triggers import Timer, RisingEdge
import random

flush_stall = 0

async def generate_clock(dut):
    """Generate clock pulses."""
    for cycle in range(30):
        dut.hclk.value = 0
        await Timer(1, units="ns")
        dut.hclk.value = 1
        await Timer(1, units="ns")

async def start_cycle_cnt(dut):
    """Generate the cycle count"""
    dut.cycle_cnt.value = 1
    for cycle in range(15):
        await RisingEdge(dut.hclk)
        if(int(str(dut.cycle_cnt.value), 2) == 4):
            dut.cycle_cnt.value = 1
        else:
            dut.cycle_cnt.value = int(str(dut.cycle_cnt.value),2) + 1

    
def twos_comp(val, bits):
    """compute the 2's complement of int value val"""
    if (val & (1 << (bits - 1))) != 0: # if sign bit is set e.g., 8bit: 128-255
        val = val - (1 << bits)        # compute negative value
    return val   


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
    dut.hrstn.value = 0
    await cocotb.start(generate_clock(dut))
    await cocotb.start(start_cycle_cnt(dut))
    await cocotb.start(flush_model(dut, flush, state))
    await Timer(5, units="ns")
    dut.hrstn.value = 1
    await Timer(11, units="ns")
    await RisingEdge(dut.hclk)

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
    #result = flush_model(dut, flush, state)
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


