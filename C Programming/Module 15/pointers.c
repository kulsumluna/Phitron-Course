#include<stdio.h>
int main()
{

    int x=500;
    int * ptr=&x;
    x=405;
    printf("%d\n",x);
    printf("%d\n",*ptr);
    
    return 0;
}