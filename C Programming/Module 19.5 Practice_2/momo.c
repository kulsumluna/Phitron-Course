#include<stdio.h>
int main()
{

   long long int m,n,k;
    scanf("%lld %lld %lld",&m,&n,&k);
    if(m%k==0 && n%k==0)
    {
        printf("Both");
    }
    if(m%k==0 && n%k!=0)
    {
        printf("Memo");
    }
    if(m%k!=0 && n%k==0)
    {
        printf("Momo");
    }
    if(m%k!=0 && n%k!=0)
    {
        printf("No One");
    }

    return 0;
}