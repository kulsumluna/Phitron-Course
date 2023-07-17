#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v={110,20,30,50};
    // cout<<v.back()<<endl;
    // cout<<v[0]<<endl;
    // cout<<v.front()<<endl;
    // vector<int>::iterator it;
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}