#include<stdio.h>
#include<string.h>
int main()
{

    char a[10001];
    fgets(a,10001,stdin);
    int capital=0;
    int small=0;
    int space=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            capital++;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            small++;
        }
        else if(a[i]==32)
        {
            space++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n",capital,small,space);
    return 0;
}