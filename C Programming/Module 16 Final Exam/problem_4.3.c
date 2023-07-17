#include<stdio.h>
void abs_num(int a)
{
if(a<0)
{
    printf("%d\n",a*(-1));
}
else
{
    printf("%d\n",a);
}
}
int main()
{ 
    int a;
     scanf("%d",&a);
  abs_num(a);
return 0;
}