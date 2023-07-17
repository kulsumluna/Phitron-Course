#include<stdio.h>
long long int fact(long long int n)
{
    if(n==0) //base case
    return 1; // 0! er man 1 tai 1 return krci 1 
    long long int ans=fact(n-1);
    return n*ans;
}
int main()
{

    long long int n;
    scanf("%lld",&n);
 long long int ans=fact(n);
 printf("%lld",ans);
    return 0;
}