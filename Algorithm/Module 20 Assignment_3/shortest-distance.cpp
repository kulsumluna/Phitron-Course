#include <bits/stdc++.h>
using namespace std;
const long long int INF = 1e18;
int main()
{
    int n, e;
    cin >> n >> e;
    long long int dist[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dist[i][j] = INF;
            if (i == j)
                dist[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b;
        long long int w;
        cin >> a >> b >> w;
        dist[a][b] = min(dist[a][b], w);
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;

    while (q--)
    {

        int s, d;
        cin >> s >> d;
        if (dist[s][d] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dist[s][d] << endl;
        }
    }

    return 0;
}