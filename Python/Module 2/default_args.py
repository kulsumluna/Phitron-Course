def sum(num1,num2):
    rslt=num1+num2
    return rslt
total=sum(11,99)
# print("Total sum : ",total)
def all_sum(num1,num2,*num):
    sum=0
    print(num)
    for n in num:
        print(n)
        sum=sum+n
    return sum
mot= all_sum(30,40,50,60,70,80,70)
print("Mot makrs : ",mot)