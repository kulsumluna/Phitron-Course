class laptop:
    def __init__(self,brand,model,memory,processor) -> None:
        self.brand=brand
        self.model=model
        self.memorry=memory
        self.processor=processor

    def run(self):
        return f"Running Laptop : {self.brand}"
    def codding(self):
        return f"learn python and practicing"
class Phone:
    def __init__(self,brand,model,dual_sim,color) -> None:
        self.brand=brand
        self.model=model
        self.dual_sim=dual_sim
        self.color=color
    def run(self):
        return f"always phn tipa tipi"
    def phone_call(self,number,text):
        return f"Sending sms to : {number} with : {text}"
    
class camera:
    def __init__(self,brand,price,model,pixel,color) -> None:
        self.brand=brand
        self.price=price
        self.model=model
        self.pixel=pixel
        self.color=color
    def run(self):
        pass
    def change_lens(self):
        pass
    