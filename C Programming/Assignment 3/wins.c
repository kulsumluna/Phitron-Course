#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int tiger = 0, pathan = 0;
    for(int i=0;i<n;i++)
    {
        int a, b;
        scanf("%d %d",&a,&b);
        if(a > b)
        {
            tiger++;
        }
        else if (b>a)
        {
            pathan++;
        }
        else if(b==a)
        {
            continue;
        }
    }
    if(tiger > pathan)
    {
        printf("Tiger\n");
    }
     else if(tiger < pathan)
    {
        printf("Pathan\n");
    }
   else if(tiger==pathan)
    {
        printf("Draw\n");
    }
    return 0;
}