#include<bits/stdc++.h>

using namespace std;
int main()
{   
    // int n;
//      cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     int x;
//     cin>>x;
//     v.push_back(x);
//     int cur_index=v.size()-1;
//       while(cur_index !=0)
//    {
//      int parent_index= (cur_index-1)/2;
//      if(v[cur_index]>v[parent_index])
//     {
//         swap(v[cur_index],v[parent_index]);
//         cur_index=parent_index;
//     }
//     else break;
//    }
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
    int cur_index=v.size()-1;
      while(cur_index !=0)
   {
     int parent_index= (cur_index-1)/2;
     if(v[cur_index]>v[parent_index])
    {
        swap(v[cur_index],v[parent_index]);
        cur_index=parent_index;
    }
    else break;
   }
}
   for(int val:v) cout<<val<<" ";
    return 0;
}