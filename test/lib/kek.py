from typing import Protocol
from sys    import getsizeof

class PaymentBox:
    class Interface(Protocol):
        def pay(self, amount): ...
            
    class PayPal(Interface):
        def pay(self, amount):
            print(f"Оплата через PayPal: {amount}")

    class Stripe(Interface):
        def pay(self, amount):
            print(f"Оплата через Stripe: {amount}")

class ShoppingCart:
    def __init__(self, payment: PaymentBox.Interface):  # Зависимость от абстракции
        self._payment = payment

    def checkout(self, amount): 
        self._payment.pay(amount)

# Использование
cart = ShoppingCart(
    payment=PaymentBox.PayPal()
    )

cart.checkout(100)  # Оплата через Stripe: 100


from dataclasses import dataclass
from enum import Enum

class Unit(Enum):
    fs = 10**15
    ps = 10**12
    ns = 10**9
    us = 10**6
    ms = 10**3
    sec = 1

# @dataclass
# class UNIT:
#     # __slots__ = ('fs', 'ps', 'ns', 'us', 'ms', 'sc')
#     fs: int = 10**15
#     ps: int = 10**12
#     ns: int = 10**9
#     us: int = 10**6
#     ms: int = 10**3
#     sc: int = 1
UNIT: str = 'ns'

class UNITS:
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
        current_unit = unit if unit is not None else UNIT
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

class SUM:
    class In(Protocol):
        def set(self, amount): ...

    class Out(Protocol):
        def set(self, amount): ...

    class A(In):
        def set(self, amount):
            print(f"State A: {amount}")

    class B(In):
        def set(self, amount):
            print(f"State B: {amount}")

    class C(Out):
        def set(self, amount):
            print(f"State C: {amount + amount}")

class DD:
    def __init__(self, 
                 a = SUM.In,
                 b = SUM.In,
                 c = SUM.Out
                 ):
        self.a = a
        self.b = b
        self.c = c

    def initial(self, amount): 
        self.a.set(amount)
        self.b.set(amount)
        self.c.set(amount)

    

# Использование
# design = DD(
#     a=SUM.A(),
#     b=SUM.B(),
#     c=SUM.C()
#     )
print(UNITS())
print(getsizeof(UNITS()))
# print(UNITS.sc.name)
# UNITS.name = "ns"
# unit = UNITS()
# unit.set("sc")
# unit.get_value
# print(UNITS.value)
# UNITS.set("ns")

# print(UNITS.name)
# design.initial(1)  # Оплата через Stripe: 100

