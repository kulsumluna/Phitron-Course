#include<stdio.h>
#include<limits.h>
int main()
{

    int n;
    scanf("%d",&n);
    int a,min=INT_MAX;
    for(int i=1;i<=n;i=i+1)
    {
        scanf("%d",&a);
        if(a<min)
        {
            min=a;
        }
    } 
    printf("%d\n",min);
    return 0;
}