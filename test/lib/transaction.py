'''
* Author: ImpulsePower
* Date of creation: 04/04/2025
* Description: Description of transaction classes and their derivatives
* License:
* Language: Python
* History:

'''
from typing import Optional,Dict, Any
from icecream import ic
from dataclasses import dataclass

from lib.const import *

@dataclass(frozen=True)
class TransactionConfig:
    """Configuration of transaction parameters"""
    default_baud_rate: int = 9600
    min_baud_rate: int = 300
    max_baud_rate: int = 115_200
    min_data: int = 0
    max_data: int = hex((2 ** DesignConstants.DATA_WIDTH) - 1)
    unit: str = TestbenchConstants.UNIT

class transactions:
    """Class of transaction"""
    def __init__(self,config: Optional[TransactionConfig] = None):
        self.error_count: int = 0
        self.config = config if config else TransactionConfig()
        self.BAUD_RATEi: int = self.config.default_baud_rate
        self.RXi: int = 0
        self.DATAo: int = 0
        self.set_time: int = 0

    def set_baud_rate(self, rate: int) -> None:
        """Setting the transfer rate to transaction.

        Args:
            rate: Baud rate

        Returns:
            None

        """
        if self.config.min_baud_rate <= rate <= self.config.max_baud_rate :
            self.BAUD_RATEi = rate
        else:
            self.error_count += 1
    
    def set_rx_data(self, data: int) -> None:
        """Sets the RX data value after validating against configured limits.

        Args:
            data: The incoming data value to be set. Must be within min_data/max_data range.
        """
        if self.config.min_data <= data <= self.config.max_data:
            self.RXi = data
        else:
            self.error_count += 1

    def set_time_transaction(self, time: int) -> None:
        """Sets the transaction timestamp.

        Args:
            time: The timestamp value to set for the transaction.
        """
        self.set_time = time

    def __repr__(self) -> str:
        """Returns a string representation of the transaction object.

        Returns:
            A formatted string showing baud rate, RX/TX data in hex, 
            and formatted time with units.
        """
        return (f"baud={self.BAUD_RATEi}, "
                f"rx={hex(self.RXi)}, "
                f"data={hex(self.DATAo)}, "
                f"time={self.set_time:.2f}{self.config.unit})")
    
    def get_stats(self) -> Dict[str, Any]:
        """Gets statistics for the transaction.

        Returns:
            A dictionary containing:
            - start_time: The transaction timestamp
            - errors: Count of validation errors encountered
        """
        return {
            'start_time': self.set_time,
            'errors': self.error_count,
        }
    
    @classmethod
    def get_instance_count(cls) -> int:
        """Gets the total count of created class instances.

        Returns:
            The number of instances created for this class.
        """
        return cls._instance_count

class UART_Transaction:
    """Represents a single UART communication transaction.

    Tracks packet data and provides transaction identification. Maintains class-level
    count of all created instances.

    Attributes:
        _instance_count (int): Class variable tracking total instances created.
        packet (tuple): Container for transaction data packets.
        transaction_id (int): Unique identifier for this transaction.
    """
    _instance_count = 0
    def __init__(self):
        """Initializes a new UART transaction instance."""
        UART_Transaction._instance_count += 1
        self.packet = (transactions)[DesignConstants.DATA_WIDTH + 2]
        self.transaction_id = transactions._instance_count

    def __repr__(self) -> str:
        """Generates official string representation of the transaction.
        
        Returns:
            str: A formatted string containing transaction ID.
        """
        return (f"Transaction(id={self.transaction_id}, ")
    
    @classmethod
    def get_instance_count(cls) -> int:
        """Gets the total number of UART transaction instances created.
        
        Returns:
            int: The count of all instances created for this class.
        """
        return cls._instance_count