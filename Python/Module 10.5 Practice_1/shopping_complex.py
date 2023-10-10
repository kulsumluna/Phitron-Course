class Customer:
    def __init__(self, email, password):
        self.email = email
        self.password = password
        self.cart = []

    def add_to_cart(self, product):
        self.cart.append(product)

    def place_order(self):
        for product in self.cart:
            if product.available_quantity > 0:
                print(f"Order placed for {product.name}")
                product.available_quantity -= 1
            else:
                print(f"Sorry, {product.name} is out of stock.")

class Seller:
    def __init__(self, email, password):
        self.email = email
        self.password = password
        self.products = []

    def add_product(self, product):
        self.products.append(product)

class Product:
    def __init__(self, name, price, available_quantity):
        self.name = name
        self.price = price
        self.available_quantity = available_quantity

    def display_product_info(self):
        print(f"{self.name} - Price: ${self.price}, Available Quantity: {self.available_quantity}")

# Creating customers and sellers
customer1 = Customer("customer1@example.com", "password1")
seller1 = Seller("seller1@example.com", "password1")

# Adding products for the seller
product1 = Product("Product 1", 10.99, 5)
product2 = Product("Product 2", 15.99, 3)
seller1.add_product(product1)
seller1.add_product(product2)

# Adding products to the customer's cart
customer1.add_to_cart(product1)
customer1.add_to_cart(product2)

# Placing an order
customer1.place_order()

# Displaying product information
for seller in [seller1]:
    print(f"Seller: {seller.email}")
    for product in seller.products:
        product.display_product_info()
