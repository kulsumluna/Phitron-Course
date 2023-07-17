#include<stdio.h>
char capital_to_small(char a)
{
    int num=a+32;
    return num;
} 
int main()
{
    char n;
    scanf("%c",&n);
    int s=capital_to_small(n);

    printf("%c",s);

    
    return 0;
}