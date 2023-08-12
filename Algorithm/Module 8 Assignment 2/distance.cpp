#include <bits/stdc++.h>
using namespace std;

const int N = 10e5;
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

    int q;
    cin >> q;

    while (q--)
    {
        int s, d;
        cin >> s >> d;

        for (int i = 0; i < N; i++)
        {
            level[i] = -1;
            visited[i] = false;
        }
        bfs(s);
        cout << level[d] << endl;
    }

    return 0;
}