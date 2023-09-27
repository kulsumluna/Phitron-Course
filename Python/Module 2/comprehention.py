numbers= [10,12,54,34,67,73]
odds=[]
for num in numbers:
    if(num % 2 == 1):
        odds.append(num)

print(odds)
odds_num=[num for num in numbers if num%2 ==1]
print(odds_num)

players=['sakib' ,'musfik' ,'tamim']
ages =['10' , '20', '30']
age_combo=[]
for player in players:
    print("player : " ,player)
    for age in ages:
        print(player,age)
        age_combo.append([player,age])
print(age_combo)
age_combo=[[player,age] for player in players for age in ages]
print(age_combo)