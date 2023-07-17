#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    // for(int i=n-1;i>=0;i--)
    // {
    //     cout<<v[i]<<" ";
    // }
    reverse(v.begin(),v.end());
    for(int c:v)
    {
        cout<<c<<" ";
    }
    return 0;
}