#base class ,parent class, common class
#derived class,child class,uncommon  class

class Device:
    def __init__(self,brand,model,color,origin) -> None:
         self.brand=brand
         self.model=model
         self.color=color
         self.origin=origin
    def run(self):
        return f"Running Laptop : {self.brand}"
        
class laptop:
    def __init__(self,memory,processor) -> None:
        self.memorry=memory
        self.processor=processor
    def codding(self):
        return f"learn python and practicing"
class Phone(Device):
    def __init__(self,model,brand,color,origin,dual_sim) -> None:
       self.dual_sim=dual_sim
       super().__init__(model,brand,color,origin)

    def __repr__(self) -> str:
        return f"phone : {self.dual_sim}"
       

    def phone_call(self,number,text):
        return f"Sending sms to : {number} with : {text}"
    
class camera:
    def __init__(self,price,pixel) -> None:
      
        self.price=price
      
        self.pixel=pixel
    def change_lens(self):
        pass

#inheritance

my_phn=Phone("Aplle" ,"samsung","BLACK","CHINA","Yes") 
print(my_phn.brand)   
print(my_phn.color)   