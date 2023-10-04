class phone:
    manufactured="China"

    def __init__(self,owner,brand,price):
        self.owner= owner
        self.brand= brand
        self.price= price
    def send_msg(self,phone,sms):
            text= f"sending sms to :{phone} and message :{sms}"
            print (text)

my_phn= phone("luna Islam","samsung",1200) 
print(my_phn.owner,my_phn.brand,my_phn.price)

    