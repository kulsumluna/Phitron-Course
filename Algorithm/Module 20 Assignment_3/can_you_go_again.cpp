#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
const long long int INF = 1e18 + 3;
vector<pair<int, int>> adj_list[N];
long long dist[N];
bool cycle = false;
int n, e;

void bellmanFord(int s)
{
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }

    dist[s] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int u = 1; u <= n; u++)
        {
            for (const pair<int, int> &edge : adj_list[u])
            {
                int v = edge.first;
                long long w = edge.second;

                if (dist[u] != INF && dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                }
            }
        }
    }

    for (int u = 1; u <= n; u++)
    {
        for (auto conn : adj_list[u])
        {
            int v = conn.first;
            long long w = conn.second;

            if (dist[u] != INF && dist[u] + w < dist[v])
            {
                cycle = true;
                break;
            }
        }
    }
}

int main()
{

    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b, w});
    }

    int s, q;
    cin >> s;

    bellmanFord(s);

    cin >> q;

    while (q--)
    {
        int des;
        cin >> des;

        if (cycle)
        {
            cout << "Negative Cycle Detected" << endl;
            break;
        }
        else
        {
            if (dist[des] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dist[des] << endl;
            }
        }
    }

    return 0;
}