#include <bits/stdc++.h>
using namespace std;
const int N = 25;
vector<int> adjlist[N];
bool visited[N];
void dfs(int u)
{
    visited[u] = true;

    for (int v : adjlist[u])
    {
        if (visited[v])
            continue;

        dfs(v);
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    while(m--)
    {
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);  //one direction tai
    }
    int x;
    cin >> x;
    dfs(x);
   int des=0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            des++;
        }
    }
   
    des--;
    cout << des;
    return 0;
}