
# def mul(x):
#     return x*2
mul= lambda nul: nul*2
square = lambda num : num*num

res=mul(5)
output= square(4)
# print(res)
# print(output)

sum= lambda x,y:x+y
rslt=sum(10,20)
# print(rslt)
numbers= [10,10,30,20,30,40,45,12,34,12]
# mul_nums= map(mul,numbers)
mul_nums= map(lambda x: x*2,numbers)
sqrt_nums= map(lambda x: x*x,numbers)
# print (list(mul_nums))
# print (list(sqrt_nums))

actors =[
    {"name" : 'luna','age' : 19},
    {"name" : 'kul','age' : 49},
    {"name" : 'nuha','age' : 5},
    {"name" : 'adnan','age' : 3},
    {"name" : 'sumaiya','age' : 11},
    {"name" : 'saba','age' : 3},
]
juniors = filter(lambda actor:actor['age'] < 30, actors)
print(list(juniors))
