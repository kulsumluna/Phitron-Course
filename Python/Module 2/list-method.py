numbers=[10,40,30,20,50,90]
numbers.append(70)
print(numbers)
# numbers.insert(0,100)
numbers.insert(2,200)
print(numbers)
if 20 in numbers:
    numbers.remove(20)
if 35 in numbers:
    numbers.remove(35)
print(numbers)
last =numbers.pop()
print(last , numbers)
sorted= numbers.sort()
print(numbers)
numbers.reverse()
print(numbers)
