#include<bits/stdc++.h>

using namespace std;
int main()
{
//     vector<int> a={10,20,30,40};
//     vector<int> x={1,2,3};
//     x=a;//O(1)  jodi a er size barai dei thle complexitiy bere O(n) hoye jabe
//     for(int i=0;i<a.size();i++)
//     {
//    cout<<x[i]<<endl;
//     }
vector<int> v={10,20,30,40,50};
v.pop_back();
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}

    return 0;
}