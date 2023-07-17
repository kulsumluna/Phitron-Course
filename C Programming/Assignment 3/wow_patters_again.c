#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int s=n-1,k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            if(i%2==0) // jodi line jor hoi thle star print hobe
            {
                printf("*");
            }
            else
            {
                printf("^"); // line bejor hole ^ print hobe
            }
        } //line sesh
        s--; // space kombe
        k=k+2; // k er man 2 kore barbe
        printf("\n");

    }
    return 0;
}