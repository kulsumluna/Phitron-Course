#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int a;
    int sum_even=0,sum_odd=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            sum_even=sum_even+a;
        }
        else
        {
           sum_odd=sum_odd+a; 
        }
    }
    printf("%d %d",sum_even,sum_odd);
    return 0;
}