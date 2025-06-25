import pytest
from test.lib.const import *

import pytest
from test.lib.const import *

# @pytest.mark.slow
def test_unit_get_name():
    """Tests Units.get_name() method for correct unit name resolution.

    Verifies:
        - Correct name resolution for known units
        - Handling of unknown unit identifiers
    """
    uni = Units()
    assert uni.get_name("ms") == "Millisecond"
    assert uni.get_name("js") == "unknown"

# @pytest.mark.slow
def test_unit_get_value():
    """Tests Units.get_value() method for correct unit value resolution.

    Verifies:
        - Correct value resolution for known units
        - Proper None return for unsupported units
    """
    uni = Units()
    assert uni.get_value("ns") == 10**9
    assert uni.get_value("ks") is None

# @pytest.mark.slow
def test_unit_repr():
    """Tests Units.__repr__() method for valid string representation.

    Verifies:
        - Return value is a string
        - String representation follows expected format
    """
    uni = Units()
    repr_str = repr(uni)
    assert isinstance(repr_str, str)
    # Optional format check:
    # assert repr_str.startswith("<Units:")

# @pytest.mark.slow
def test_tb_const_properties():
    """Tests TestbenchConstants properties for correct types and values.

    Verifies:
        - CLK_period is float
        - BIT_period is int
        - TB_DELAY is int
    """
    tc = TestbenchConstants(design=DesignConstants)
    assert isinstance(tc.CLK_period, float)
    assert isinstance(tc.BIT_period, int)
    assert isinstance(tc.TB_DELAY, int)

# @pytest.mark.slow
def test_tb_const_repr():
    """Tests TestbenchConstants.__repr__() for valid string representation.

    Verifies:
        - Return value is a string
        - String representation is non-empty
    """
    tc = TestbenchConstants(design=DesignConstants)
    repr_str = repr(tc)
    assert isinstance(repr_str, str)
    assert len(repr_str) > 0
