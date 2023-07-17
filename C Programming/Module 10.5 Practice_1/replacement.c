#include<stdio.h>
#include<limits.h>
int main()
{

    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
        }
        
    } for(int i=0;i<n;i++)
    {
        if(max==ar[i])
        {
            int temp=max;
        ar[i]=min;
        }
     else if(min==ar[i])
        {
          int temp=min;
          ar[i]=max;
        }
    printf("%d ",ar[i]);
    }

 
    return 0;
}