#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int j=1;j<=a;j++)
    {
        int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    scanf("%d",&c);
    int flag=-1;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==c)
        {
            flag=i;
            break;
        }
        
    }
    if(flag==-1)
    {
        printf("Case %d: Not Found\n",j);
    }
    else
    {
        printf("Case %d: %d\n",j,flag);
    }


    }

    
    return 0;
}