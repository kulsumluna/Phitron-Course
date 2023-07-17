#include<stdio.h>
int main()
{

    int ar[5]={10,20,30,40,50};
    printf("0th index value-%d\n",ar[0]);
    printf("0th index value-%d\n",*ar);
    printf("1th index value-%d\n",ar[1]);
    printf("1th index value-%d\n",*(ar+1));
    printf("2th index value-%d\n",2[ar]);
    printf("2th index value-%d\n",*(ar+2));
    return 0;
}