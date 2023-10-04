class Person:
    def __init__(self,name,age,height,weight) -> None:
        self.name=name
        self.age=age
        self.height=height
        self.weight=weight
    def eat(self):
        print("i am eating rice")
    def exercise(self):
        raise NotImplementedError
class Crickter(Person):
    def __init__(self, name, age, height, weight,team) -> None:
        self.team=team
        super().__init__(name, age, height, weight)
       #override
    def eat(self):
        print("vegatables")
    def exercise(self):
        print("gym krte hobe")
        # + sign overload
    def __add__(self,other):
        return self.age + other.age
     # * sign overload
    def __mul__(self,other):
        return self.age * other.age
     # > sign overload
    def __gt__(self,other):
        return self.age > other.age

sakib= Crickter("sakib",34,56,60,"bd")
mush= Crickter("mush",32,66,69,"bd")
sakib.eat()
sakib.exercise()
# plus sign overload
print(10+20)
print([1,2,3] +[4,5,6,7])
print(sakib + mush)
print(sakib * mush)
print(sakib > mush)
        