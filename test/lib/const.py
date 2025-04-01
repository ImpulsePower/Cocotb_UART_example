from dataclasses import dataclass

class Units:
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

    def get_value(self, unit: str) -> int:
        """
        Return value

        Args:   
            unit: Name of unit.
        """
        return getattr(self, unit)

    def __repr__(self) -> str:
        """
        Printing current value UNIT
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
    """
    CLOCK_FREQ: int = 100_000_000
    BAUD_RATE: int = 115_200
    DATA_WIDTH: int = 8

@dataclass(frozen=True)
class TestbenchConstants:
    """
    Testbench-related constants
    Attributes:
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
    
    @property
    def CLK_period(self) -> float:
        """Clock period in current units"""
        return Units().value / self.design.CLOCK_FREQ
    
    @property
    def BIT_period(self) -> int:
        """Bit period in current units"""
        return int((self.design.CLOCK_FREQ / self.design.BAUD_RATE) * self.CLK_period)
    
    @property
    def TB_DELAY(self) -> int:
        """Testbench delay in current units"""
        return self.BIT_period * 2

    def __repr__(self) -> str:
        """
        Printing current value
        """
        return f'''
        <RESET: {self.NEED_RST} UNIT: {self.UNIT}>
        <CLOCK DELAY: {self.CLOCK_DELAY} RESET DELAY: {self.RESET_DELAY}) DELAY: {self.DELAY})>
        '''