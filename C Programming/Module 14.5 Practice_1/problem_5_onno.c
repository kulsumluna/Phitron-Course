#include<stdio.h>
char small_to_capital()
{
    char n;
    scanf("%c",&n);
    int s=n+32;
    return s;
}
int main()
{
    int s=small_to_capital();
    printf("%c",s);

    
    return 0;
}