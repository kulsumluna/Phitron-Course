#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v={10,30,40,50};
    vector<int> v2={100,300,400,500};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    // v.insert(v.begin()+3,20);
    for(int c: v)
    {
        cout<<c<<" ";
    }
    return 0;
}