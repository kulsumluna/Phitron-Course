#include<stdio.h>
int main()
{
  int test;
  scanf("%d",&test);
  for(int i=1;i<=test;i++)
  {

 
   long long int l;
   long long int r;
    scanf("%lld %lld",&l,&r);
    long long int sum=0;
    for(int i=l;i<=r;i++)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
     }
    return 0;
}