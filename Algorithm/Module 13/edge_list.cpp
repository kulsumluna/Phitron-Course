#include<bits/stdc++.h>

using namespace std;
int main()
{
    
     int n,e;
    cin>>n>>e;
   vector<pair<int,int>> edge_list;

        while(e--)
    {
        int a,b;
        cin>>a>>b;
        edge_list.push_back({a,b});
      
    }
    for(int i=0;i<edge_list.size();i++)
    {
        cout<<edge_list[i].first<<" "<<edge_list[i].second<<endl;
    }
    return 0;
}