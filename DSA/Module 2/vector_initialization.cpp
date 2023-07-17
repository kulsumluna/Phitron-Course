#include<bits/stdc++.h>

using namespace std;
int main()
{
    // vector<int> v; // type 1
    // vector<int> v(5); //type 2
    // vector<int> v(5,6); //prothom size trpr value type 3
    // vector<int> v2(5,100); //type 4
    // vector<int> v(v2);
    // int a[5]={1,3,4,5,6};//ttpe 5
    // vector<int> v(a,a+5);
    vector<int>v={20,30,40,50};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    return 0;
}