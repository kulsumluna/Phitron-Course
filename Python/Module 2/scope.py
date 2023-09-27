#global variables
balance=3000

def buy(item,price):
    #local scope
    global balance
    print("balance inside the function ", balance)
    balance= balance- price
    print(f"balance after the function {item} ", balance)
buy("chosma",1000)