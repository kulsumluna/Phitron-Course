class singleton:
    _instance = None
    def __init__(self) -> None:
        if singleton._instance is None:
            singleton._instance =  self
        else:
            raise Exception("This is a singletone,already have an instance")
    
    @staticmethod
    def get_instance():
        if singleton._instance is None:
            singleton()
        return singleton._instance
first = singleton.get_instance()
print(first)
first1 = singleton.get_instance()
print(first1)