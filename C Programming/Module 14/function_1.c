#include<stdio.h>
// funtion syntax
// return type function name (parameters)
// {code
// }
int sum(int a, int b)
{
    int sum=a+b;
    return sum;

}
int main()
{
 int s=sum(20,30);    
 printf("%d",s);
    
    return 0;
}