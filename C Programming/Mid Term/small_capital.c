#include<stdio.h>
#include<string.h>
int main()
{

    char c;
    int s=0,cs=0;
    while(scanf("%c",&c) != EOF)
    {
        if(c>='a' && c<='z')
        {
            s++;
        }
        else
        {
            cs++;
        }
    }
    printf("%d %d",cs,s);
    return 0;
}