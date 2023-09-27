#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adjlist[N];
bool visited[N];
int depth[N];
int height [N];
void dfs(int u)
{ 
    //section 1: actions just after entring node u
    visited[u]=true; 
    // cout<<"Visiting Node :  "<<u<<endl;
    for(int v: adjlist[u])
    {
        //section 2: actions before entring a neibhor/child
        if(visited[v]== true) continue;
        depth[v]=depth[u]+1; //depth er jnno
        
                 dfs(v);
                //  if(height[v]+1 > height[u])
                //  {
                //      height[u]=height[v]+1;
                //  }
                height[u]=max(height[u],height[v]+1);
        
        
        //section 3: actions after exiting a neibhor
    }
    //section 4: actions before exiting node u
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
       int u,v;
       cin>>u>>v;
       adjlist[u].push_back(v);// directed hole
       adjlist[v].push_back(u);// undirected hole
       
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<"Depth of Nodes "<< i<< ": "<<depth[i]<<endl;
    }
      for(int i=1;i<=n;i++)
    {
        cout<<"Height of Nodes "<< i<< ": "<<height[i]<<endl;
    }
   
   
    return 0;
}