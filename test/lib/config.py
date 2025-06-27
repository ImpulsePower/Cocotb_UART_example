'''
* Author: ImpulsePower
* Date of creation: 01/04/2025
* Description: Classes for testbench constant 
* License:
* Language: Python
* History:

'''
from dataclasses import dataclass
from functools import cached_property

class Units:
    """
    Class of time measurement unit. Needed for calculations of delays, 
    periods of signals, etc
    """
    __slots__ = ('fs', 'ps', 'ns', 'us', 'ms', 'sc', 'name', 'value')
    def __init__(self, unit: str = None):
        # Unit value table
        self.fs: int = 10**15
        self.ps: int = 10**12
        self.ns: int = 10**9
        self.us: int = 10**6
        self.ms: int = 10**3
        self.sc: int = 1
        # Set unit attribute
        current_unit = unit if unit is not None else TestbenchConstants.UNIT
        self.name: str = self.get_name(current_unit)
        self.value: int = self.get_value(current_unit)

    def get_name(self, unit: str) -> str:
        """
        Return full name of units

        Args:   
            unit: Name of unit.

        Return:
            str: Full name UNIT string
        """
        unit_names = {
            'fs': 'Femtosecond',
            'ps': 'Picosecond',
            'ns': 'Nanosecond',
            'us': 'Microsecond',
            'ms': 'Millisecond',
            'sc': 'Second'
        }
        return unit_names.get(unit, 'unknown')

    def get_value(self, unit: str) -> int | None:
        """ Get mult factor of UNIT string 

        Args:   
            unit: Name of unit.

        Return:
            int: Unit value from value table
        """
        try:
            return getattr(self, unit)
        except AttributeError:
            return None

    def __repr__(self) -> str:
        """Printing current value UNIT

        Return:
            str: Printing string with mask:
            UNIT: X (value=X)
        """
        return f"<UNIT: {self.name} (value={self.value})>"
    
@dataclass(frozen=True)
class DesignConstants:
    """
    Design-related constants

    Attributes:
        CLOCK_FREQ: Clock frequency in Hz (default: 100 MHz)
        BAUD_RATE: Baud rate in bps (default: 115200)
        DATA_WIDTH: Data width in bits (default: 8)
        CLK_NAME: Name of clock signal in hardware design (default: "CLKip") 
        RST_NAME: Name of reset signal in hardware design (default: "RST_NAME") 
    """
    CLOCK_FREQ: int = 100_000_000
    BAUD_RATE: int  = 115_200
    DATA_WIDTH: int = 8
    CLK_NAME: str   = "CLKip"
    RST_NAME: str   = "RSTi"
    DONE_NAME: str  = "DONEo"

@dataclass(frozen=True)
class TestbenchConstants:
    """
    Testbench-related constants
    
    Args:
        NEED_RST: Whether reset is needed (default: True)
        NUM_OF_TEST: Number of tests (default: 1)
        UNIT: Time unit (default: 'ns')
        RESET_period: Reset period in time units (default: 20)
        CLOCK_DELAY: Clock delay in ns (default: 10)
        RESET_DELAY: Reset delay in ns (default: 10)
        DELAY: Generic delay in ns (default: 20)
    """
    design: DesignConstants
    NEED_RST: bool = True
    NUM_OF_TEST: int = 1
    UNIT: str = 'ns'
    RESET_period: int = 20
    CLOCK_DELAY: int = 10
    RESET_DELAY: int = 10
    DELAY: int = 20
    
    @cached_property
    def CLK_period(self) -> float:
        """Calculates the time of the clock period in current units

        Return: 
            float: Calculated time of the clock period
        """
        return Units().value / self.design.CLOCK_FREQ
    
    @cached_property
    def BIT_period(self) -> int:
        """Bit period in current units

        Return: 
            int: Calculated time of the bit period
        """
        return int((self.design.CLOCK_FREQ / self.design.BAUD_RATE) * self.CLK_period)
    
    @cached_property
    def TB_DELAY(self) -> int:
        """Testbench delay in current units

        Return: 
            int: Calculated time of the internal testbench period
        """
        return self.BIT_period * 2

    def __repr__(self) -> str:
        """
        Printing current value

        Return: 
            str: Printing string with mask:
            RESET: X UNIT: X
            CLOCK DELAY: X RESET DELAY: X DELAY: X 
        """
        return f'''
        <RESET: {self.NEED_RST} UNIT: {self.UNIT}>
        <CLOCK DELAY: {self.CLOCK_DELAY} RESET DELAY: {self.RESET_DELAY}) DELAY: {self.DELAY})>
        '''

@dataclass(frozen=True)    
class FIFO_ports:
    clk: str    = "CLKip"
    rst: str    = "RSTi"
    datai: str  = "DATAi"
    datao: str  = "DATAo"
    we: str     = "WEi"
    rd: str     = "RDi"
    full: str   = "FULLo"
    empty: str  = "EMPTYo"

    # def __init__(self, dut):
    #     self._dut = dut  # Сохраняем dut внутри объекта

    # def __getattr__(self, attr):
    #     """Позволяет писать port.clk вместо port.clk_name."""
    #     if attr in self.__annotations__:
    #         signal_name = getattr(self, attr)
    #         return getattr(self._dut, signal_name)
    #     raise AttributeError(f"Unknown port: {attr}")

