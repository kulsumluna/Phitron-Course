#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if(num > 0)
    {
        printf(" This Number is POSITIVE");
    }
     else if(num < 0)
    {
        printf(" This Number is NEGATIVE");
    }
   else
    {
        printf(" This Number is ZERO");
    }

    return 0;
}