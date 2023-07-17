#include<stdio.h>
int main()
{
    long long int T;
    scanf("%lld",&T);
    long long int a, b;
    for (long long int i = 0; i < T; i++)
    {
       scanf("%lld %lld", &a, &b);
       long long int sum =0;
    if(a<b){
        sum=((b*(b+1))/2) - ((a*(a-1))/2); // jodi b boro hoi
        }
        
       else {
          sum=((a*(a+1))/2) - ((b*(b-1))/2); // jodi a boro hoi
       }

       
       printf("%lld\n",sum);
    }
    return 0;
}  