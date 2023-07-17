#include<stdio.h>
#include<limits.h>
int array(int a[] ,int n,int i)
{   // base case
  if(i==n)
  {
    return INT_MIN; //sobceye choto man
  }
    int mx=array(a,n,i+1);
    if(a[i]>mx)
    {
        return a[i];
    }
    else{
        return mx; 
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
     int ans=array(a,n,0);
     printf("%d",ans);
    return 0;
}