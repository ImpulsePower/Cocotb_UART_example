
from pathlib import Path
from os import getenv
from cocotb.runner import get_runner
import pytest

# import cocotb
# from cocotb.triggers import Timer

# from debugpy import listen,wait_for_client
# listen(5003); print("Wait connect debugger...zzz"); wait_for_client()

def test_uart_runner(top,test):
    # proj_path = Path(__file__).resolve().parent
    proj_path = Path().resolve().parent
    hdl_toplevel_lang = getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = getenv("SIM", "icarus")
    verilog_sources = []
    vhdl_sources = []
    build = f"{proj_path}/test/build/icarus"
    test_dir = test.replace(',','').split('_')[1]
    if hdl_toplevel_lang == "verilog":
        # verilog_sources = [proj_path / "uart_rx.sv"]
        verilog_sources = [proj_path/'src'/"uart_rx.sv",
                           proj_path/'src'/"sync.sv",
                           proj_path/'src'/"uart_rx_mem.sv"
                           ]
    else:
        # vhdl_sources = [proj_path / "uart_rx.vhdl"]
        vhdl_sources = [proj_path/'src'/"uart_rx.vhdl"]

    runner = get_runner(sim)
    runner.build(
        verilog_sources=verilog_sources,
        vhdl_sources=vhdl_sources,
        hdl_toplevel="uart_rx",
        build_dir=f'{build}/{test_dir}',
        always=True,
    )
    runner.test(
                hdl_toplevel=top, 
                test_module=test,
                waves=True
        )

def test_fifo_runner(top,test):
    # proj_path = Path(__file__).resolve().parent
    proj_path = Path().resolve().parent
    hdl_toplevel_lang = getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = getenv("SIM", "icarus")
    verilog_sources = []
    vhdl_sources = []
    build = f"{proj_path}/test/build/icarus"
    test_dir = test.replace(',','').split('_')[1]
    if hdl_toplevel_lang == "verilog":
        # verilog_sources = [proj_path / "uart_rx.sv"]
        verilog_sources = [proj_path/'src'/"fifo.sv"
                        #    proj_path/'src'/"defines.svh"
                           ]
    else:
        # vhdl_sources = [proj_path / "uart_rx.vhdl"]
        vhdl_sources = [proj_path/'src'/"fifo.vhdl"]

    runner = get_runner(sim)
    runner.build(
        verilog_sources=verilog_sources,
        vhdl_sources=vhdl_sources,
        hdl_toplevel="fifo",
        build_dir=f'{build}/{test_dir}',
        always=True,
    )
    runner.test(
                hdl_toplevel=top, 
                test_module=test,
                waves=True
        )
    
def test_axils():
    dut = "axils"
    module = "test_axils"
    sim_build = "sim_build"
    verilog_sources = ["axils.sv"]
    extra_args = ["-Iincdir"]  # Если есть дополнительные include-директории

    runner = get_runner("icarus")  # Или другой симулятор (VCS, Verilator)
    runner.build(
        verilog_sources=verilog_sources,
        includes=extra_args,
        hdl_toplevel=dut,
        build_dir=sim_build,
    )
    runner.test(
        hdl_toplevel=dut,
        test_module=module,
        build_dir=sim_build,
    )
    
def main():
    test_dict = {
        "uart_rx": "test_uart,"
    }
    print(pytest.__file__)  # Should point to site-packages, not a local file
    for key,value in test_dict.items():
        test_uart_runner(key,value)

    test_dict = {
        "fifo": "test_fifo,"
    }
    print(pytest.__file__)  # Should point to site-packages, not a local file
    for key,value in test_dict.items():
        test_fifo_runner(key,value)

if __name__ == "__main__":
    main()

# def unitest(top,test):
#     sources = [proj_path/'src'/"uart_rx.sv"]
#     test_dir = test.replace(',','').split('_')[1]
#     runner.build(
#         sources = sources,
#         hdl_toplevel=top,
#         build_dir=f'{build}/{test_dir}',
#         always=True,
#     )
#     runner.test(
#         hdl_toplevel=top, 
#         test_module=test,
#         waves=True
#         )