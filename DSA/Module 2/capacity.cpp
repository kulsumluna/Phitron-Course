#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v; //type 1

    // cout<<v.max_size()<<endl;
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(20);
    // cout<<v.capacity()<<endl;
    // v.push_back(40);
    // cout<<v.capacity()<<endl;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
     v.push_back(40);
    //  v.clear();
         v.resize(2);
         v.resize(7,20);
     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
// cout<<v[3]<<endl;

    return 0;
}