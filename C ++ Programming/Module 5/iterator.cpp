#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a;
    cin>>a;
    // string :: iterator it;
    // for(int i=0;i<a.size();i++)
    // {
    //    cout<<a[i]<<endl;
    // }
    // cout<<*a.begin()<<endl;
    // cout<<*(a.end()-1)<<endl;
    for( auto it=a.begin();it<a.end();it++)
    {
cout<<*it<<endl;
    }
    return 0;
}