#include<stdio.h>
void array(int a[],int n,int i)
{
    if(i==n)
    return;
    array(a,n,i+1); // reverse krte bolece tai print er agei call koreci
    if(i%2==0)
    {
        printf("%d ",a[i]);
    }
}
int main()
{

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    array(a,n,0);
    return 0;
}