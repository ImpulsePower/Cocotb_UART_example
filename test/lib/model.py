'''
* Author: ImpulsePower
* Date of creation: 03/04/2025
* Description: Reference models
* License:
* Language: Python
* History:

'''
from typing import Protocol
from test.lib.config import *

class AbstractReferenceModel(Protocol): 
    def calculate(self): ...

class UART_default_ref(AbstractReferenceModel):
    def calculate(self):
        """
        The reference model
        """
        if not self.expected:
            raise ValueError("No expected data in scoreboard!")
        exp_data = 0
        for i in range(1, DesignConstants.DATA_WIDTH+1):
            exp_data += (self.expected[i].RXi * 2 ** (i - 1))
        return exp_data
    
    
class ReferenceModel:
    def __init__(self, data = AbstractReferenceModel):
        self.expected_data = data
    
    def calc(self):
        self.expected_data.calculate()

model = ReferenceModel(data = UART_default_ref())
    
    
