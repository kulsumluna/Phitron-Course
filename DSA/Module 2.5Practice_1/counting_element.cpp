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
    int count=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(v[i]+1==v[j])
    //     {
    //         count++;
    //         break;
    //     }
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        auto it=find(v.begin(),v.end(),v[i]+1);
        if(it != v.end())
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}