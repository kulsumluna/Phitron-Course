#include<stdio.h>
void fun(int x)
{
    x=100;
    printf("Fun er x-%d\n",x);
}
int main()
{
int x=200;

printf("main er x-%d\n",x);
fun(x);
    
    return 0;
}