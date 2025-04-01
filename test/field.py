from typing import Protocol

class TransactionBox:
    class Interface(Protocol):
        def __init__(self): ...