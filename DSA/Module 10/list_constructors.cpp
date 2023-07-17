#include<bits/stdc++.h>

using namespace std;
int main()
{
    // list<int> list_1={1,2,3,4,5,6};
    int a[5]={10,30,50,60,70};
    vector<int> v={100,200,300,400};
    // list<int>mylist(a,a+5);
    list<int>mylist(v.begin(),v.end());
    
    // cout<<mylist.size();
    for(auto it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}