#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,int> mp;
    while(t--)
    {
        int a;
        string b;
        cin>>a>>b;
        if(a==1)
        {
            int c;
            cin>>c;
            mp[b]+=c;
            
           
        }
        else if(a==2)
        {
            mp[b]=0;
        }
        else
        {
            cout<<mp[b]<<endl;
        }
    }
    return 0;
}