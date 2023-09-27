#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int dist[N];
bool visited[N];
vector<int> adj_list[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    dist[s]=0;

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int v: adj_list[u])
        {
           if(visited[v]) continue;
           q.push(v);
            dist[v]=dist[u]+1;
            visited[v]=true;
        }
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
    bfs(1);
    for(int i=0;i<=n;i++)
    {
        cout<<"Node "<<i<<": "<<dist[i]<<endl;
    }
    return 0;
}