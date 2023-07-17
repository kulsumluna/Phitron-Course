#include<stdio.h>
int main()
{  int test;
scanf("%d",&test);
for(int i=0;i<test;i++){

    int n=4;
    int a[n];
    for(int i=0;i<n;i++) // array er sahajje input niyeci
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]) // array er element guloke ascending order ee sajiyeci
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int sum=0;
     for(int i=0;i<n-1;i++) // prothom 3 ti element er sum ber koreci
    {
       sum=sum+a[i];
    }
    int ans=a[n-1]-sum; // seser element theke sum biyog koreci
    printf("%d\n",ans);
    }
    return 0;
}