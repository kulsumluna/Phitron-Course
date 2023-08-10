#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
vector<int> adjlist[N];
bool visited[N];
stack<int> st;
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        // step 1: ber kore ana
        int u=q.front();
       st.push(u);
        q.pop();
        
        //section 1:

        for(int v: adjlist[u])
        {
            //section 2:
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            //section 3:
        }
        //section 4:
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
    bfs(1);
   while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}