#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int> adjlist[N];
bool visited[N];
int level[N];
bool dfs(int u,int p=-1)
{
    bool CycleExists= false;
    visited[u]=true;
    for(int v:adjlist[u])
    {
         if(v==p) continue;
         if(visited[v]) return true;
       CycleExists= CycleExists | dfs(v,u);
    }
    return CycleExists;
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    bool isCycle=false;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]) continue;
        isCycle =isCycle| dfs(i);
    }
    if(isCycle) cout<<"YES";
    else cout<<"NO";
    return 0;
}