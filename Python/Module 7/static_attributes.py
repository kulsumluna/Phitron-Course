class Shopping():
    cart=[] # static attributes
    origin="china"
    def __init__(self,name,location) -> None:
        self.name="Dhaka City"
        self.location="Dhaka"
    def purchase(self,item,price,ammount):
        remaining= ammount-price
        print(f"buying : {item} , for price : {price} , and remaining :{remaining}")

    @staticmethod
    def multi(a,b):
        result= a*b
        print(result)
    @classmethod
    def extra_jinis(self,item):
        print(f"sudhu sudhu jai r khai",item)

kazipara= Shopping("kazipara","mirpur 10")
# kazipara.purchase("dress",500,1000)
kazipara.extra_jinis("ice cream")
Shopping.extra_jinis("lungi")
Shopping.multi(4,5)
# print(kazipara)