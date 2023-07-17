#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int q;
    scanf("%d",&q);
    int l,r;
    for(int i=1;i<=q;i++)
{
    scanf("%d %d",&l,&r);
    int temp=a[l];
    a[l]=a[r];
    a[r]=temp;

}
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}