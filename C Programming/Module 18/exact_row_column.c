#include<stdio.h>
int main()
{

    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    // exact row chai jodi thle avabe krte hobe
    // int n;
    // scanf("%d",&n);
    // for(int i=0;i<col;i++)
    // {
    //     printf("%d ",a[n][i]);
    // }
    //exact column chai jodi
    int n;
    scanf("%d",&n);
    for(int i=0;i<row;i++)
    {
        printf("%d ",a[i][n]);
    }
    // fixed row column ber krte blle
    // int n,m;
    // scanf("%d %d",&n,&m);
    
    //     {
    //         printf("%d",a[n][m]);
    //     }
   
    return 0;
}