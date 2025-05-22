import cocotb
from cocotb.triggers import Timer
from cocotb.runner import get_runner
import os
from pathlib import Path
import debugpy

debugpy.listen(5003)
print("Ожидание подключения отладчика...")
debugpy.wait_for_client()  # Скрипт остановится здесь, пока не подключится отладчик

def test_adder_runner():

    hdl_toplevel_lang = os.getenv("HDL_TOPLEVEL_LANG", "verilog")
    sim = os.getenv("SIM", "icarus")

    proj_path = Path(__file__).resolve().parent

    verilog_sources = []
    vhdl_sources = []

    if hdl_toplevel_lang == "verilog":
        verilog_sources = [proj_path / "uart_rx.sv"]
    else:
        vhdl_sources = [proj_path / "uart_rx.vhdl"]

    runner = get_runner(sim)
    runner.build(
        verilog_sources=verilog_sources,
        vhdl_sources=vhdl_sources,
        hdl_toplevel="uart_rx",
        always=True,
    )

    runner.test(hdl_toplevel="dff", test_module="test_dff,")

if __name__ == "__main__":
    test_adder_runner()


# test_runner.py
import os
from pathlib import Path
from cocotb.runner import get_runner

# proj_path = Path(__file__).resolve().parent
# proj_path = os.getcwd()
proj_path = Path().resolve().parent
# os.chdir(proj_path)
sim = os.getenv("SIM", "icarus")
runner = get_runner(sim)
build = f"{proj_path}/test/build/icarus"

def unitest(top,test):
    sources = [proj_path/'src'/"uart_rx.sv"]
    test_dir = test.replace(',','').split('_')[1]
    runner.build(
        sources = sources,
        hdl_toplevel=top,
        build_dir=f'{build}/{test_dir}',
        always=True,
    )
    runner.test(
        hdl_toplevel=top, 
        test_module=test,
        waves=True
        )
    
if __name__ == "__main__":
    test_dict = {
        # "e41": "test_e41,",
        # "e42": "test_e42,",
        # "e43": "test_e43,",
        # "e43": "test_e44,",
        # "e45": "test_e45,",
        # "e46": "test_e46,",
        # "e46": "test_e47,",
        # "e48": "test_e48,",
        # "e49": "test_e49,",
        # "e410": "test_e410,",
        # "e412": "test_e412,",
        # "e413": "test_e413,",
        "e414": "test_e414,",
        "e415a": "test_e415,",
        "e415b": "test_e415,",
        "e415c": "test_e415,",
        "e416": "test_e416,",
        "e417": "test_e417,",
        "e418": "test_e418,"
    }
    for key,value in test_dict.items():
        unitest(key,value)