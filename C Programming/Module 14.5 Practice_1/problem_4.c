#include<stdio.h>
char small_to_capital(char a)
{
    int num=a-32;
    return num;
} 
int main()
{
    char n;
    scanf("%c",&n);
    int s=small_to_capital(n);
    printf("%c",s);

    
    return 0;
}