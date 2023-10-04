#read only--> cant change this value
#getter--> get a value of a property
#setter --> set  a value of a property
class user():
    def __init__(self,name,age,money) -> None:
        self._name=name
        self._age=age
        self.__money=money
        # getter without read only attributes
    @property
    def age(self):
        return self._age
    #getter
    @property
    def salary(self):
        return self.__money
    @salary.setter
    def salary(self,value):
       if value<0:
           return f"salary cannot be negative"
       self.__money += value
    
    

samsu=user("kul",20,1000)
# print(samsu.__money)
# print(samsu.age())
print(samsu.age)
# print(samsu.salary())
print(samsu.salary)
samsu.salary=4000
print(samsu.salary)
        