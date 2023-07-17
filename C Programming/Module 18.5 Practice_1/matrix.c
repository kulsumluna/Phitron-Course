#include<stdio.h>

int main()
{
   int n;
    scanf("%d ",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    int sum1=0; // primary diagonal er sum kora hoyece
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
             sum1=sum1+a[i][j];
            }
        }   
    }
    
    int sum2=0;// secondary diagonal er sum kora hoyece
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            {
             sum2=sum2+a[i][j];
            }
        }   
    }
    int result=sum1-sum2;
    if(result<0)
    {
     printf("%d",result*(-1));
    }
    
    else 
    {
        printf("%d",result);
    }
    
    return 0;
}