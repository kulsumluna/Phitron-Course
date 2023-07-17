#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n;j++)
        {
       if(a[i]+1==a[j])
        {
     count++;
     break;
        }
        }
       
    }
    printf("%d",count);
    return 0;
}