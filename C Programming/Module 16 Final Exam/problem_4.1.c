#include<stdio.h>
int sub(int a,int b)
{
int sub= a-b;
return sub;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=sub(a,b);
    printf("%d",s);
    return 0;
}