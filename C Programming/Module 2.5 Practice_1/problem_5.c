#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 10000)
    {
    printf("Buy Gucci Bag\n");
    if(tk > 20000)
    {
        printf("Buy Gucci Belt");
    }

    }
    else if(tk >= 50000)
    {
        printf("Buy Levis Bag");
    }
    else
    {
        printf("Something");
    }
    return 0;
}