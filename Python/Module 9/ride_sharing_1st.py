from abc import ABC,abstractmethod
from datetime import datetime

class Ride_Sharing:
    def __init__(self,company_name,) -> None:
        self.company_name=company_name
        self.riders=[]
        self.drivers=[]
        self.rides=[]
    
    def add_rider(self,rider):
        self.riders.append(rider)
    
    def add_driver(self,driver):
        self.drivers.append(driver)
    def __repr__(self) -> str:
        # print(f"{self.company_name} with riders: {len(self.riders)} and drivers :{len(self.drivers)}")
        return f"{self.company_name} with riders: {len(self.riders)} and drivers: {len(self.drivers)}"
class user(ABC):
    def __init__(self,name,email,NID) -> None:
        self.name=name
        self.email=email
        #todo : set user id dynamically
        self.__id=0
        self.__NID=NID
        self.wallet=0

    @abstractmethod
    def display_profile(self):
        raise NotImplementedError
class Rider(user):
    def __init__(self, name, email, NID,current_location,initial_amount) -> None:
        self.current_ride=None
        self.wallet=initial_amount
        self.current_location=current_location

        super().__init__(name, email, NID)

    def display_profile(self):
        print(f"Rider : with name: {self.name} and email: {self.email}")
    
    def load_cash(self,ammount):
        if ammount>0:
            self.wallet += ammount
    def update_location(self,current_location):
        self.current_location=current_location
        

    def request_ride(self,destination,ride_sharing):
        if not self.current_ride:
            print("Looking for a ride") 
            ride_request = Ride_Request(self,destination)
            ride_macher=Ride_Matching(ride_sharing.drivers)
            ride=ride_macher.find_driver(ride_request)
            print("get the ride",ride)
            self.current_ride=ride
    def show_curent_ride(self):
        print(self.current_ride)
class Driver(user):
    def __init__(self, name, email, NID,currrent_location) -> None:
        self.current_location=currrent_location
        self.wallet=0
        super().__init__(name, email, NID)

    def display_profile(self):
        print(f"Driver with name : {self.name} and email with: {self.email} ")

    def accept(self,ride):
        ride.set_driver(self)

class Ride:
    def __init__(self,start_loc,end_loc) -> None:
        self.start_loc=start_loc
        self.end_loc=end_loc
        self.driver=None
        self.rider=None
        self.start_time=None
        self.end_time=None
        self.estimated_fare=None
    
    def set_driver(self,driver):
        self.driver=driver
    def start_ride(self):
        self.start_time=datetime.now()
    def end_ride(self,ammount):
        self.end_time=datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare
    def __repr__(self) -> str:
        return f"Ride Details . Started: {self.start_loc} to {self.end_loc}"

class Ride_Request:
    def __init__(self,rider,end_location) -> None:
        self.rider=rider
        self.end_location=end_location

class Ride_Matching:
    def __init__(self,drivers) -> None:
        self.available_drivers=drivers
    def find_driver(self,ride_request):
        if len(self.available_drivers)>0:
            #TODO: find the closest driver of the rider
            print("Looking for a driver")
            driver=self.available_drivers[0]
            ride=Ride(ride_request.rider.current_location,ride_request.end_location)
            driver.accept(ride)
            return ride

class Vehicles(ABC):

    speed={
        "car":50,
        "bike":60,
        "cng":15
        }
    def __init__(self,vehicles_type,license_plate,rate,) -> None:
        self.vehicles_type=vehicles_type
        self.license_plate=license_plate
        self.rate=rate
        self.status="available"
    @abstractmethod 
    def start_drive(self):
        pass

class Car(Vehicles):
    def __init__(self, vehicles_type, license_plate, rate) -> None:
        super().__init__(vehicles_type, license_plate, rate)
    
    def start_drive(self):
        self.status="unavailable"

class Bike(Vehicles):
    def __init__(self, vehicles_type, license_plate, rate) -> None:
        super().__init__(vehicles_type, license_plate, rate)
    
    def start_drive(self):
        self.status="unavailable"

#check the class integration

niye_jao= Ride_Sharing("Niye Jao")
sakib=Rider("Sakib Khan","sakibkhan@gmail.com",12345,"Mohakhali",1200)
niye_jao.add_rider(sakib)
kalam= Driver("Kalam","kalam@gmail.com",11234,"Bijoy Sarani")
niye_jao.add_driver(kalam)
print(niye_jao)

sakib.request_ride("uttara" ,niye_jao)
sakib.show_curent_ride()

