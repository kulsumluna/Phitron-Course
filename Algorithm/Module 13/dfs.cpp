#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool visited[N];
vector<int> adj_list[N];
void dfs(int source)
{
    cout<<source<<endl;
    visited[source]=true;
    for(int v:adj_list[source])
    {
          if(visited[v])continue;
          dfs(v);
    }
}
int main()
{
    int n,e;
  cin>>n>>e;
  while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    dfs(1);
    
    return 0;
}