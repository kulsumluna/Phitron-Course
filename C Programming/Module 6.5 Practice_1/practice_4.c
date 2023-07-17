#include<stdio.h>
int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    int ans= a-b;
    if(ans==0 || ans<0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d",ans);
    }
    return 0;
}