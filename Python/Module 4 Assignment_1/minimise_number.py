n = int(input())
a = list(map(int, input().split()))
res = 0
all_even = all(x % 2 == 0 for x in a) #sobguloi jor nki
while all_even: #sobguloi even thakle
    a = [x // 2 for x in a]  # Divide all numbers by 2
    res += 1
    all_even = all(x % 2 == 0 for x in a)
print(res)