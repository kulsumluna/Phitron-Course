numbers= [10,39,490,569]
person1= {"luna islam" , "Panchagarh","Student"} 
print(person1)
""" key  value
pair value
dictionary
hash table 
overlap with set """
person={"name" : "luna islam","address": "Panchagarh","job":"student"}
print(person)
print(person['job'])
print(person.keys())
print(person.values())
person['Language']= 'python'
print(person)
person['name'] ='kulsum islam'
print(person)
del person['Language']
print(person)
for key,value in person.items():
    print(key,value)
