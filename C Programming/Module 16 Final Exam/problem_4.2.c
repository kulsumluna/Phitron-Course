#include<stdio.h>
int mul()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int mul=a*b;
    return mul;
}
int main()
{
int s=mul();
printf("%d",s);
    
    return 0;
}