#include<stdio.h>
int main()
{
int row,col;
int flag=0;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    int b;
    scanf("%d",&b);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        if(a[i][j]==b) // jodi kono akta element b er soman hoi thle flag 1 hobe
        {
            flag=1;
        }
        }
    }
    if(flag==0)
    {
        printf("will take number"); // kono element b er soman noi tai flag 0
    }
    else 
    {
        printf("will not take number");

    }

    
    return 0;
}