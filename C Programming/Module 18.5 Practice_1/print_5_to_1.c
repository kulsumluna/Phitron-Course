#include<stdio.h>
void print(int i,int n)
{
    if(i==0)
    return;
    if(i>1)
    {
      printf("%d ",i);
    }
    else
    {
         printf("%d",i);
    }
   
    print(i-1,n);
}
int main()
{

    int n;
    scanf("%d",&n);
    print(n,n);
    return 0;
}