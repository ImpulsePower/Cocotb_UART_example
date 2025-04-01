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

