import cocotb
from cocotb.handle  import SimHandleBase

def is_hierarchy_object(obj) -> bool:
    """
    Checks whether the Hierarchy Object (SimHandle) is an object.
    """
    return isinstance(obj, SimHandleBase)

def print_dut_structure(dut, indent=0):
    """
    Outputs the DUT structure as a tree.
    Args:   
        dut : Design under test.
    """
    for name in dir(dut):
        if name.startswith("_"):
            continue
        obj = getattr(dut, name)
        if isinstance(obj, SimHandleBase):
            print("  " * indent + f"├─ {name} (HierarchyObject)")
            print_dut_structure(obj, indent + 1)
        else:
            print("  " * indent + f"├─ {name} ({type(obj).__name__})")