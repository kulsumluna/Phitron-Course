#include<stdio.h>
void my_abs(int a)
{
    if(a<0)
    {
        printf("%d",a*(-1));

    }
    else
    {
        printf("%d",a);
    }
}
int main()
{

    int n;
    scanf("%d",&n);
    my_abs(n);

    return 0;
}