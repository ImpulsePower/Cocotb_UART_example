'''
* Author: ImpulsePower
* Date of creation: 04/04/2025
* Description: Description of transaction classes and their derivatives
* License:
* Language: Python
* History:

'''
from typing import Optional,Dict, Any, List
from icecream import ic
from dataclasses import dataclass

from test.lib.config import *

@dataclass(frozen=True, slots=True)
class TransactionConfig:
    """Configuration of transaction parameters"""
    default_baud_rate: int = 9600
    min_baud_rate: int = 300
    max_baud_rate: int = 115_200
    min_data: int = 0
    max_data: int = 1
    unit: str = TestbenchConstants.UNIT

class transactions:
    """Class of transaction"""
    def __init__(self,config: Optional[TransactionConfig] = None):
        self.error_count: int = 0
        self.config = config if config else TransactionConfig()
        self.BAUD_RATEi: int = self.config.default_baud_rate
        self.RXi: int = 0
        self.DATAo: int = 0
        self.RDi: int = 0
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
    
    def set_rx_data(self, rx: int) -> None:
        """Sets the RX data value after validating against configured limits.

        Args:
            data: The incoming data value to be set. Must be within min_data/max_data range.
        """
        
        # if self.config.min_data <= data <= self.config.max_data:
        self.RXi = rx
        # else:
        #     self.error_count += 1

    def set_time_transaction(self, time: int) -> None:
        """Sets the transaction timestamp.

        Args:
            time: The timestamp value to set for the transaction.
        """
        self.set_time = time

    def set_RDi_transaction(self, RDi: int) -> None:
        """Sets the transaction timestamp.

        Args:
            time: The timestamp value to set for the transaction.
        """
        self.RDi = RDi

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
    # _instance_count = 0
    def __init__(self, config: Optional[TransactionConfig] = None):
        """
        Initializes a new UART transaction instance.
        """
        # UART_Transaction._instance_count += 1
        self.dc = DesignConstants()
        self.blank: transactions = transactions(config)
        self.packet: List[Optional[transactions]] = [None] * (self.dc.DATA_WIDTH+2)

    def forge(self,br,rx,tm,rd):
        """Configures the blank transaction template with provided values.
        
        Args:
            br: Baud rate value
            rx: RX data value
            tm: Timestamp value
        """
        self.blank.set_baud_rate(br)
        self.blank.set_rx_data(rx)
        self.blank.set_time_transaction(tm)
        self.blank.set_RDi_transaction(rd)
        
    def add(self,index):
        """Adds the current blank transaction to the specified packet index.
        
        Args:
            index: Position in packet (0-9)
            
        Raises:
            IndexError: If index is out of bounds
        """
        if not 0 <= index < len(self.packet):
            raise IndexError(f"Индекс {index} выходит за границы 0-{len(self.packet)-1}")
        if self.packet[index] is not None:
            raise ValueError(f"Позиция {index} уже содержит транзакцию")
        
        update_packet = lambda idx: (
            setattr(self.packet[idx], 'BAUD_RATEi', self.blank.BAUD_RATEi),
            setattr(self.packet[idx], 'RXi', self.blank.RXi),
            setattr(self.packet[idx], 'set_time', self.blank.set_time)
        )        
        self.packet[index] = transactions()
        update_packet(index)        

    def get(self) -> list:
        '''
        '''
        return self.packet
    
    def __repr__(self) -> str:
        """Generates official string representation of the transaction.
        
        Returns:
            str: A formatted string containing transaction ID.
        """
        return (f"Transaction(id={self.transaction_id}, ")
    
    def reset(self, config: Optional[TransactionConfig] = None):
        self.blank = transactions(config)
        self.packet = [None] * (self.dc.DATA_WIDTH+2)

    @classmethod
    def get_instance_count(cls) -> int:
        """Gets the total number of UART transaction instances created.
        
        Returns:
            int: The count of all instances created for this class.
        """
        return cls._instance_count
    