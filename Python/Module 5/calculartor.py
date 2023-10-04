class calculator:
    brand="Cassio100fx"

    def add(self,num1,num2):
        pas = num1+num2
        return pas
    
    def subs(self,num1,num2):
        ans=num1-num2
        return ans
    def mul(sef,num1,num2):
        ans=num1*num2
        return ans
    def div(sef,num1,num2):
        ans=num1/num2
        return ans
    
my_cal= calculator()
ans1=my_cal.add(10,20)
ans2=my_cal.subs(20,10)
ans3=my_cal.mul(10,20)
ans4=my_cal.div(100,20)
print(ans1 , ans2 ,ans3 ,ans4)