#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int x=n/2;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==x)
            {
                printf("#");
                continue;
            }
            if(j==x)
            {
                printf("#");

            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }


    return 0;
}