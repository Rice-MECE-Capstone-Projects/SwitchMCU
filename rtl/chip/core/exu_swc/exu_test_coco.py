import cocotb
from cocotb.triggers import Timer

@cocotb.test()
async def my_first_test(dut):
    for cycle in range(10):
        dut.clk.value = 0
        await Timer(1, units="ns")
        dut.clk.value = 1
        await Timer(1, units="ns")
    
    dut._log.info("my_singal_1 is %s", dut.my_signal_1.value)
    assert dut.my_signal_2.value[0] == 0, "my_signal2[0] is not 0!"
    