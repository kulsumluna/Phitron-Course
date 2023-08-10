#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int> adjlist[N];
bool visited[N];
vector<int> vec[N];
int row=0;
void bfs(int s)
{
    queue<int> q;
    if(s) q.push(s);
    vec[row].push_back(s);
    visited[s]=true;
    while(!q.empty())
    {
        // step 1: ber kore ana
        int u=q.front();
        q.pop();
        // cout<<"Visiting Node :"<< u <<endl;
        //section 1:

        for(int v: adjlist[u])
        {
            //section 2:
            if(visited[v]==true) continue;
            q.push(v);
            vec[row].push_back(v);
            visited[v]=true;
            
            //section 3:
        }
        //section 4:
    }

}
void dfs(int u)
{
    visited[u]=true;
    vec[row].push_back(u);
    for(int v:adjlist[u])
    {
        if(visited[v]) continue;
        dfs(v);
    }
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
 int con_comp=0;
 for(int i=1;i<=n;i++)
 {
    if(visited[i]) continue;
    bfs(i);
    con_comp++;
    row++;
 }
 cout<<"Componenets number -> "<<con_comp<<endl;
 for(int i=0;i<row;i++)
 {
    cout<<"Component "<<i+1<<" : ";
    for(int val: vec[i])
    {
   cout<<val<<" ";
    }
    cout<<endl;
 }
    

    
    
    return 0;
}