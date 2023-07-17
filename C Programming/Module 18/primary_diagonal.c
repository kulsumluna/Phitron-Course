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
    int flag=1;
    if(row != col) // jodi row er soman col nah hoi thle ata diagonal hobe nah
    {
        flag=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j) // jodi korgulo soman hoi thle samne jao
            {
                continue;
            }
            if(a[i][j]!=0) // jodi kono akta element 0 na hoi thle diagonal hobe nah
            {
                flag =0;
            }
        }
    }
    if(flag==1)
    {
        printf("Primary Diagonal\n");
    }
    else 
    {
        printf("Not Diagonal\n");
    }
    return 0;
}