class shop:
    cart =[]
    def __init__(self,buyer):
        self.buyer= buyer
    def add_to_cart(self,items):
        self.cart.append(items)

meh= shop("mehjabin")
meh.add_to_cart("dress")
meh.add_to_cart("shoes")
print(meh.cart)
meher= shop("meher")
meher.add_to_cart("bresslate")
meher.add_to_cart("hejab")
print(meher.cart)