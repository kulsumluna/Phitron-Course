#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x && arr[i+1]==x)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"Yes";
    else cout<<"No";
    return 0;
}