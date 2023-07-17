#include<stdio.h>
long long int sum( long long int a[],int i,int n)
{ 
    if(i>=n)
    return 0;
    else
    {
          return (a[i]+sum(a,i+1,n));
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
   long long int a[n];
    for(int i=0;i<n;i++)
    {
     scanf("%lld",&a[i]);
    }
 long long int result=sum(a,0,n);
 printf("%lld",result);

    return 0;
}