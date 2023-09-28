#list-->[]
#Tupple --> ()
#set --> {}
#set hoccce uniqque items of collection
numbers= [10,10,30,20,30,40,45,12,34,12]
print(numbers)
nums_set= set(numbers)
print(nums_set)
nums_set.add(50)
print(nums_set)
nums_set.remove(34)
print(nums_set)
for item in nums_set:
    print(item)
A= {1,3,5,7}
B= {1,3,5,7,10,40}
print(A&B)