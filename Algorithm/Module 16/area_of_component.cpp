#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N = 1e3+5;
char g[N][N];
int n, m;
bool visited[N][N];
long long int cnt;

vector<pii> dist = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool Valid(int si, int sj)
{
    if (si >= 0 && si < n && sj >= 0 && sj < m && g[si][sj] == '.')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dfs(int si, int sj)
{
    visited[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        pii s = dist[i];

        int ci = si + s.first;
        int cj = sj + s.second;

        if (Valid(ci, cj) && !visited[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;
    long long int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j] && g[i][j] == '.')
            {
                cnt = 0;
                dfs(i, j);
                mn = min(mn, cnt);
            }
        }
    }

    if (cnt == 0)
        cout << -1;
    else
        cout << mn;
    return 0;
}