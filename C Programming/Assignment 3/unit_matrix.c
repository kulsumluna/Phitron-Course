#include<stdio.h>
int main()
{
   int row;
    scanf("%d",&row);
    int a[row][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    int flag=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==j) // jodi korgulo soman hoi thle samne jao
            {
                if(a[i][j]!= 1) // kono akta elemennt jodi a[0][0] er soman na hoi thle scalar hobe na
                {
                    flag=0;
                }
            }
else if(a[i][j]!=0) // jodi kono akta element 0 na hoi thle diagonal hobe nah
            {
                flag =0;
            }
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}