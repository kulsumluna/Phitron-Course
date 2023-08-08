#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adjlist[N];
bool visited[N];
int height [N];
void dfs(int u)
{ 

    visited[u]=true; 
    
    for(int v: adjlist[u])
    {
        if(visited[v]== true) continue;
        
        
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
    int x;
    cin>>x;

    dfs(1);
   
     cout<<"Height of "<< x<<" = "<<height[x]<<endl;
   
   
    return 0;
}