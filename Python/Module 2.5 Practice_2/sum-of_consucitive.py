t=int(input())
for i in range(t):
    x,y=input().split()
    x=int(x)
    y=int(y)
    #swap
    if(x>y):
        y,x=x,y
    res=0
    for a in range(x+1,y):
        if a%2 != 0:
            res += a
    print(res)



