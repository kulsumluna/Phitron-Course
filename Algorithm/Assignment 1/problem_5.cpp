#include<bits/stdc++.h>

using namespace std;
void merge(int a[],int b[],int result[],int n,int m)
{
    int x=0,y=0,k=0;
    while(x<n && y<m)
    {
        if(a[x]>b[y])
        {
            result[k++]=a[x++];
        }
        else
        {
           result[k++]=b[y++]; 
        }
    }
    while(x<n)
    {
       result[k++]=a[x++];  
    }
    while(y<m)
    {
       result[k++]=b[y++];  
    }
}
int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int result[n+m];
    merge(a,b,result,n,m);
    for(int i=0;i<n+m;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}