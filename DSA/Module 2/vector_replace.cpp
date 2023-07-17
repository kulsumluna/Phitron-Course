#include<bits/stdc++.h>

using namespace std;
int main()
{
    //replace
//     vector<int> v={2,3,4,2,6,5,7,8,2};
//     replace(v.begin(),v.end()-1,2,100);
//     for(int c:v)
//     {
//         cout<<c<<" ";
//     }
//find
    vector<int> v={2,3,4,2,6,5,7,8,2};
  
    // vector<int>::iterator it;

    auto it= find(v.begin(),v.end(),10);
    cout<<*it<<endl;
    if(it==v.end())
     cout<<"Not Found";
    else   cout<<"found";
    return 0;
}