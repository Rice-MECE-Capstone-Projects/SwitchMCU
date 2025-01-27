import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ReadOnly
import random

async def cycle_counter(dut):
    while True:
        await RisingEdge(dut.hclk)
        dut.cycle_cnt.value = (dut.cycle_cnt.value % 4) + 1

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
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Initialize inputs
    dut.hready.value = 1  # AHB ready signal
    dut.exu_load_base_addr.value = 0x1000  # Base address for the load
    dut.exu_load_offset.value = 0x4  # Offset for the load
    dut.exu_load_size.value = 3  # Word load
    dut.exu_load_sext.value = 1  # No sign extension (unsigned)
    dut.exu_load_en.value = 1  # Enable load operation

    # Give time for the load operation to start
    await RisingEdge(dut.hclk)
    await RisingEdge(dut.hclk)
    dut.exu_load_en.value = 0  # Deassert load enable

    # Provide data as if it came from memory (simulate response)
    dut.hrdata.value = 0xDEADBEEF  # Mock data
    # await RisingEdge(dut.mau_load_data)  # Allow one clock cycle for data to be loaded

    # Check if the data was loaded correctly
    # await RisingEdge(dut.mau_load_data)
    await wait_for_signal_change(dut.mau_load_data, dut.hclk)
    # await Timer(10, units="ns")
    assert dut.mau_load_data.value == 0xDEADBEEF, f"Expected mau_load_data to be 0xDEADBEEF, got {hex(dut.mau_load_data.value)}"
    assert dut.mau_load_en.value == dut.exu_load_en.value, "mau_load_en should be high after a load"
    assert dut.mau_load_rd.value == dut.exu_load_rd.value

@cocotb.test()
async def test_load_byte_no_sign(dut):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz
    cocotb.start_soon(clock.start())

    # reset
    dut.hrstn.value = 0
    dut.cycle_cnt.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    # dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))


    # Initialize signals
    dut.hready.value = 1
    dut.exu_load_base_addr.value = 0x1000
    dut.exu_load_offset.value = 0x1
    dut.exu_load_size.value = 1  # Byte load
    dut.exu_load_sext.value = 0  # Zero extension
    dut.exu_load_en.value = 1

    await RisingEdge(dut.hclk)
    await RisingEdge(dut.hclk)
    dut.exu_load_en.value = 0

    dut.hrdata.value = 0xAB
    await wait_for_signal_change(dut.mau_load_data, dut.hclk)

    assert dut.mau_load_data.value == 0x000000AB, "Expected mau_load_data to be 0x000000AB for byte load"
    assert dut.mau_load_en.value == dut.exu_load_en.value, "mau_load_en should be high after a load"
@cocotb.test()
async def test_load_byte_signed(dut):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz
    cocotb.start_soon(clock.start())

    # reset
    dut.hrstn.value = 0
    dut.cycle_cnt.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    # dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))


    # Initialize signals
    dut.hready.value = 1
    dut.exu_load_base_addr.value = 0x1000
    dut.exu_load_offset.value = 0x1
    dut.exu_load_size.value = 1  # Byte load
    dut.exu_load_sext.value = 1  # Zero extension
    dut.exu_load_en.value = 1

    await RisingEdge(dut.hclk)
    await RisingEdge(dut.hclk)
    dut.exu_load_en.value = 0

    dut.hrdata.value = 0xAB
    await wait_for_signal_change(dut.mau_load_data, dut.hclk)

    assert dut.mau_load_data.value == 0xFFFFFFAB, "Expected mau_load_data to be 0xFFFFFFAB for byte load"
    assert dut.mau_load_en.value == dut.exu_load_en.value, "mau_load_en should be high after a load"


@cocotb.test()
async def test_load_halfword_no_sign(dut):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz
    cocotb.start_soon(clock.start())

    # reset
    dut.hrstn.value = 0
    dut.cycle_cnt.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    # dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))


    # Initialize signals
    dut.hready.value = 1
    dut.exu_load_base_addr.value = 0x1000
    dut.exu_load_offset.value = 0x1
    dut.exu_load_size.value = 2  # Byte load
    dut.exu_load_sext.value = 0  # Zero extension
    dut.exu_load_en.value = 1

    await RisingEdge(dut.hclk)
    await RisingEdge(dut.hclk)
    dut.exu_load_en.value = 0

    dut.hrdata.value = 0xDEADBEEF
    await wait_for_signal_change(dut.mau_load_data, dut.hclk)

    assert dut.mau_load_data.value == 0x0000BEEF, "Expected mau_load_data to be 0x0000802B for halfword load"
    assert dut.mau_load_en.value == dut.exu_load_en.value, "mau_load_en should be high after a load"

@cocotb.test()
async def test_load_halfword_signed(dut):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz
    cocotb.start_soon(clock.start())

    # reset
    dut.hrstn.value = 0
    dut.cycle_cnt.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    # dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))


    # Initialize signals
    dut.hready.value = 1
    dut.exu_load_base_addr.value = 0x1000
    dut.exu_load_offset.value = 0x1
    dut.exu_load_size.value = 2  # Byte load
    dut.exu_load_sext.value = 1  # Zero extension
    dut.exu_load_en.value = 1

    await RisingEdge(dut.hclk)
    await RisingEdge(dut.hclk)
    dut.exu_load_en.value = 0

    dut.hrdata.value = 0xDEADBEEF
    await wait_for_signal_change(dut.mau_load_data, dut.hclk)

    assert dut.mau_load_data.value == 0xFFFFBEEF, "Expected mau_load_data to be 0x0000802B for halfword load"
    assert dut.mau_load_en.value == dut.exu_load_en.value, "mau_load_en should be high after a load"


@cocotb.test()
async def test_store_data(dut):
    clock = Clock(dut.hclk, 10, units="ns") # 100MHz clk signal
    cocotb.start_soon(clock.start())

    # sys reset
    dut.hrstn.value = 0
    dut.cycle_cnt.value = 0
    dut.exu_load_en.value = 0
    await Timer(10, units="ns")
    dut.hrstn.value = 1

    # cycle_counter++
    dut.cycle_cnt.value = 0
    cocotb.start_soon(cycle_counter(dut))

    # Initialize inputs
    dut.hready.value = 1  # AHB ready signal
    dut.exu_load_base_addr.value = 0x1000  # Base address for the load
    dut.exu_load_offset.value = 0x4  # Offset for the load
    dut.exu_load_size.value = 3  # Word load
    dut.exu_load_sext.value = 1  # No sign extension (unsigned)
    dut.exu_store_en.value = 1  # Enable load operation
    dut.exu_store_data.value = 0xDEADBEEF  # Mock data

    # Give time for the load operation to start
    await RisingEdge(dut.hclk)
    dut.hready.value = 0
    # await RisingEdge(dut.hclk)
    # dut.exu_load_en.value = 0  # Deassert load enable

    # Provide data as if it came from memory (simulate response)

    # await RisingEdge(dut.mau_load_data)  # Allow one clock cycle for data to be loaded

    # Check if the data was loaded correctly
    await wait_for_signal_change(dut.hwdata, dut.hclk)
    # await Timer(10, units="ns")
    assert dut.hwdata.value == 0xDEADBEEF, f"Expected mau_load_data to be 0xDEADBEEF, got {hex(dut.hwdata.value)}"
    assert dut.hwrite.value == 1, "mau_load_en should be high after a load"
    # assert dut.mau_load_rd.value == dut.exu_load_rd.value