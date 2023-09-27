#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
const int N = 1e3 + 5;
vector<pair<int, int>> adj_list[N];
int dist[N];
bool visited[N];

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[source] = 0;
    pq.push({dist[source], source});

    while (!pq.empty())
    {
        pair<int, int> u = pq.top();
        pq.pop();

        int v = u.second;

        if (visited[v]) continue;
        visited[v] = true;
        long long u_Cost = u.first;

        for (auto ch : adj_list[v])
        {
            long long chNode = ch.first;
            long long chCost = ch.second;

            if (u_Cost + chCost < dist[chNode])
            {
                dist[chNode] = u_Cost + chCost;
                pq.push({dist[chNode], chNode});
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        int w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b, w});
    }
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INT_MAX;
    }
    int s;
    cin >> s;
    dijkstra(s);
      int q;
    cin >> q;

    while (q--)
    {
        int dst, cost;
        cin >> dst >> cost;

        if (dist[dst] <= cost)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}