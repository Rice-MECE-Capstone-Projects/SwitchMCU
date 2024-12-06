import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ReadOnly
import random

# regfile = 0

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1

async def regfile_reader(dut):
    global regfile
    while True:
        await RisingEdge(dut.hclk)
        regfile = [hex(dut.regfile_interact.value[i:i+31]) for i in range(0, len(dut.regfile_interact.value), 32)]
        regfile = regfile[::-1]

@cocotb.coroutine
async def wait_for_signal_change(signal, clk):
    prev_val = signal.value
    while True:
        await RisingEdge(clk)
        current_val = signal.value
        if prev_val != current_val:
            break


@cocotb.test()
async def test_load_word(dut):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # sys reset
    dut.hrstn.value = 0
    # cocotb.start_soon(regfile_reader(dut))
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    cocotb.start_soon(regfile_reader(dut))
    # cycle_counter++
    # dut.cycle_cnt.value = 0
    # cocotb.start_soon(cycle_counter(dut))
    address = 5
    # Initialize inputs
    dut.reg_wen.value = 1
    dut.reg_waddr.value = address
    dut.reg_wdata.value = 0x0000BEEF

    # Give time for the load operation to start
    await RisingEdge(dut.hclk)
    await RisingEdge(dut.hclk)
    dut.reg_wen.value = 0  # Deassert load enable


    address = 3
    # Initialize inputs
    dut.reg_wen.value = 1
    dut.reg_waddr.value = address
    dut.reg_wdata.value = 0xFEEDBEEF

    # Give time for the load operation to start
    await RisingEdge(dut.hclk)
    await RisingEdge(dut.hclk)
    dut.reg_wen.value = 0 
    # Provide data as if it came from memory (simulate response)
    # dut.hrdata.value = 0xDEADBEEF  # Mock data
    # await RisingEdge(dut.mau_load_data)  # Allow one clock cycle for data to be loaded

    # Check if the data was loaded correctly
    # await RisingEdge(dut.mau_load_data)
    # await wait_for_signal_change(dut.mau_load_data, dut.hclk)
    # await Timer(10, units="ns")
    start = address * 32 + 1
    end = start + 32
    # regfile_full = dut.regfile_interact.value
    # print(f"reg_file type: {type(reg_file)}")
    # # print(f"reg_file pre hex: {reg_file}")
    # gaming = reg_file[len(reg_file)-end:len(reg_file)-start]
    # print(f"experiment: {hex(gaming)}")
    # print(f"reg_file: {hex(reg_file)}")
    # print(f"regfile index: {hex(reg_file).index('deadbeef')}")
    # print(f"regfile index: {hex(reg_file)[2:10]}")
    # print(f"regfile length: {len(reg_file)}")

    # regfile = [hex(regfile_full[i:i+31]) for i in range(0, len(regfile_full), 32)]
    print(f"regfile length: {len(regfile)}")
    # regfile = regfile[::-1]
    print(f"regfile: {regfile}")
    assert int(regfile[5], 16) == 0xDEADBEEF, f"Expected regfile to be 0xDEADBEEF, got {regfile[5]}"
    # assert dut.mau_load_en.value == dut.exu_load_en.value, "mau_load_en should be high after a load"
    # assert dut.mau_load_rd.value == dut.exu_load_rd.value

