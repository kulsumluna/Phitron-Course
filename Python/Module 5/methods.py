def call():
    print("Calling Someone")
    return "Call done"

class phone:
    name= "samsung"
    color= "Green"
    Model="A20"
    features= ["camera",'speaker',"hammer"]
    def call(self):
        print("calling one person")

    def send_msg(self,phone,sms):
            text= f"sending sms to :{phone} and message :{sms}"
            return text
my_phn=phone()
print(my_phn.name)
print(my_phn.color)
print(my_phn.Model)
print(my_phn.features)
my_phn.call()
res= my_phn.send_msg(123,"i miss you")
print(res)