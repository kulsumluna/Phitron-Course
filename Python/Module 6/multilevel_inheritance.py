class vehicles:
    def __init__(self,name,price) -> None:
        self.name=name
        self.price=price
    def move(self):
        pass
    def __repr__(self) -> str:
         return f"{self.name} {self.price}"
    
class Bus(vehicles):
    def __init__(self, name, price,seat) -> None:
        self.seat=seat
        super().__init__(name, price)

class Truck(vehicles):
    def __init__(self, name,price,weight) -> None:
        self.weight=weight
        super().__init__(name, price,weight)
class PickUpTruck(Truck):
    def __init__(self, name, price, weight) -> None:
        super().__init__(name, price, weight)

class ACBus(Bus):
    def __init__(self, name, price, seat) -> None:
        # self.status=status
        super().__init__(name,  price, seat)
    def __repr__(self) -> str:
        print(self.seat)
        return super().__repr__()

hanif=ACBus("hanif",400000,12)
print(hanif)