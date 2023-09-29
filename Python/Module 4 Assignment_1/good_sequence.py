from collections import Counter
N = int(input())
a = list(map(int, input().split()))
cnt = Counter(a)
r_c = 0
for x in cnt:
    if cnt[x] > x:
        r_c += cnt[x] - x
    elif cnt[x] < x:
        r_c += cnt[x]
print(r_c)