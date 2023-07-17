#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    
    for(int j=1;j<=q;j++)
    {
     int sum=0;
      int l,r;
     cin>>l>>r;
     for(int i=l;i<=r;i++)
     {
        sum=sum+a[i];
        
     }
     cout<<sum<<endl;
       }
    
    return 0;
}