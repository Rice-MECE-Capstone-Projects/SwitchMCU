import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = dut.cycle_cnt.value + 1

@cocotb.test()
async def test_ifu_basic(dut):
    """Test basic functionality of the IFU"""

    # 100MHz clock signal
    clock = Clock(dut.hclk, 10, units="ns")  # 10ns period (100MHz)
    cocotb.start_soon(clock.start())

    # Reset the DUT
    dut.hrstn.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # Initialize signals
    dut.cycle_cnt.value = 0
    dut.pc_write.value = 0
    dut.ifu_dec_stall.value = 0
    dut.hready.value = 1  # Assume the AHB bus is always ready
    # update cycle_counter
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Test: Reset should initialize pc to 0
    await RisingEdge(dut.hclk)
    assert dut.pc.value == 0, "PC not reset to 0"

    # # Test: Write to PC (pc_write signal)
    # dut.pc_write.value = 1
    # dut.pc_wdata.value = 100
    # dut.cycle_cnt.value = 4
    # await Timer(10, units="ns")
    # assert dut.pc_wdata.value == 100, "PC not written correctly when pc_write is high"

    # Test: Instruction fetching (simulate AHB read)
    dut.hready.value = 1
    dut.hrdata.value = 0xDEADBEEF  # Mock instruction data
    await Timer(60, units="ns")
    print("inst_out.value: {}".format(dut.inst_out.value))
    assert dut.inst_out.value == 0xDEADBEEF, "Instruction output is incorrect"
