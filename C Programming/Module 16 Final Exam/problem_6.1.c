#include<stdio.h>
void call_by_value(int a)
{
    a=600;
    printf("%d\n",a);
}
int main()
{

int x=3200;

printf("%d\n",x);
call_by_value(x);
    
    return 0;
}