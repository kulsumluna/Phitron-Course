#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N=1e3+5;
const int INF=1e9+8;
vector<pii> adjlist[N];
vector<int> dist(N,INF);
vector<bool> visited(N);
void dijkstra(int source)
{
    priority_queue <pii,vector<pii>,greater<pii>> pq;
    dist[source]=0;
    pq.push({dist[source],source});
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();

        visited[u]=true;

        for(pii vpair : adjlist[u])
        {
            int v=vpair.first;
            int w=vpair.second;
            if(visited[v]) continue;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adjlist[u].push_back({v,w});

    }
    dijkstra(1);
    for(int i=1;i<=n;i++)
    {
        cout<<"Distance of Nodes "<<i<<" : "<<dist[i]<<endl;
    }

    return 0;
}