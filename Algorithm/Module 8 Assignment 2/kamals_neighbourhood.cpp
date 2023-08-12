#include <bits/stdc++.h>
using namespace std;

const int N = 10e4 + 5;
vector<int> adjlist[N];
bool visited[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adjlist[u])
        {
            if (visited[v])
                continue;

            q.push(v);
            visited[v] = true;
        }
    }
    int child = 0;
    for (int i : adjlist[s])
    {
        if (visited[i])
        {
            child++;
        }
    }
    cout << child;
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
    int x;
    cin >> x;
    bfs(x);
    return 0;
}