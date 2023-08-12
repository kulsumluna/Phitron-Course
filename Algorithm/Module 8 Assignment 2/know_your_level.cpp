#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<int> adjlist[N];
bool visited[N];
int level[N];

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

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
            level[v] = level[u] + 1;
        }
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
    int x;
    cin >> x;
    bfs(0);
    vector<int>sh;

    for (int i = 0; i < N; i++)
    {
        if (level[i] == x)
        {
            sh.push_back(i);
        }
    }

    if (sh.empty())
    {
        cout << "-1";
    }
    else if (x == 0)
    {
        cout << "0";
    }
    else
    {
        for (int c : sh)
        {
            cout << c<< " ";
        }
        cout << endl;
    }
    return 0;
}