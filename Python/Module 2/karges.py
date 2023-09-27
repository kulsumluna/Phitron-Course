def full_name(f,s):
    name= f'full name is : {f} {s}'
    return name
# name=full_name("luna",'Islam') #serial wise parameter
name=full_name(s="Luna", f='islam')
print(name)

# famous(**kargs)
def famous_name(f,l,**a):
    name= f"{f} {l}"
    # print(a['t'])
    for key,val in a.items():
        print(key,val)
    return name
name= famous_name(f="Kusun",l="Islam",t="enginner",a="Valo meye")
print(name)


def a_lot(n1,n2):
    sum=n1+n2
    mul=n1*n2
    div=n1/n2
    # return [sum,mul,div]
    return sum,mul,div
final= a_lot(10,5)
print(final)
    