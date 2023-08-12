#include <bits/stdc++.h>
using namespace std;
const int N = 10e3;
vector<int> adjlist[N];
bool visited[N];
vector<int> countNode;

void dfs(int s, int &cnt)
{
    visited[s] = true;
    cnt++;
    for (int v : adjlist[s])
    {
        if (!visited[v])
            dfs(v, cnt);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            int cnt = 0;
            dfs(i, cnt);
            if (cnt > 1)
                countNode.push_back(cnt);
        }
    }
    sort(countNode.begin(),countNode.end()); // acending sort kore niyeci

    for (int c : countNode)
        cout << c<< " ";
    return 0;
}