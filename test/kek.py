# from enum import Enum

# class Unit(Enum):
#     fs = 10**15
#     ps = 10**12
#     ns = 10**9
#     us = 10**6
#     ms = 10**3
#     sec = 1

# print(Unit.ns.name)
from enum import Enum
from icecream import ic
from random     import randint

class Unit(Enum):
    fs = 10**15
    ps = 10**12
    ns = 10**9
    us = 10**6
    ms = 10**3
    sec = 1

UNIT = Unit.ns.name
UNIT_VALUE = Unit.ns.value

CLOCK_FREQ = 100000000 # Clock frequency in Hz
DATA_WIDTH = 8 # Data width in bits
BAUD_RATE = 115200 # Baud rate in bps
CLK_period = UNIT_VALUE / CLOCK_FREQ
RESET_period = 20
BIT_period = int( (CLOCK_FREQ / BAUD_RATE) * CLK_period)

class transactions:
    def __init__(self, BAUD_RATEi=0,RXi=0,set_time=0):
        self.BAUD_RATEi = BAUD_RATEi
        self.RXi = RXi
        self.DATAo = 0
        self.set_time = set_time

# def input_gen():
#     """Generator for input data applied by BitDriver.

#     Continually yield a tuple with the number of cycles to be on
#     followed by the number of cycles to be off.
#     """
#     while True:
#         yield randint(1, 5), randint(1, 5)
# init_val=create_binary("0", 1, big_endian=True)

def generate_transaction() -> tuple:
    """
    Generate input transaction
    """
    test_case = []
    exp = []
    for cycle in range(DATA_WIDTH + 1):
        test_case.append(transactions(
            BAUD_RATEi=BAUD_RATE,
            RXi=randint(0,1) if cycle > 0 else 0,
            set_time=BIT_period)
        )
    test_case.append(transactions(
            BAUD_RATEi=BAUD_RATE,
            RXi=1,
            set_time=BIT_period)
        )
    for case in test_case:
        exp.append(case.RXi)
    return tuple(exp),tuple(test_case)



transaction = generate_transaction()
i = 0
for trans in transaction:

# attributes = [attr for attr in dir(transaction[0]) if not attr.startswith('__')]
# index = attributes.index('RXi')
    i += 1



# ls = input_gen()
# ic(randint(1, 5))