def class_decode():
    print("stating the double deacker")
    def inner_fun():
        print("this is the inner loop")
        return 1000
    return inner_fun
# print(class_decode()())

def do_somethimg(work):
    print("work started")
    # print(work)
    work()
    print("work ended")

# do_somethimg(2)
# do_somethimg("ami busy")

def coding():
    print("coding in python")
# do_somethimg(coding)
def sleping():
    print("sleping and dreaming in pyhton")
do_somethimg(sleping)