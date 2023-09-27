#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N = 1e3 + 5;
int n, m;
bool visited[N][N];
int dist[N][N];

vector<pii> dis = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool Valid(int si, int sj)
{
    if ((si>= 0 && sj < n) && (sj >= 0 && si < m))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int bfs(int s_r, int s_c, int d_r, int d_c)
{
    queue<pii> q;
    q.push({s_r, s_c});
    visited[s_r][s_c] = true;
    dist[s_r][s_c] = 0;

    while (!q.empty())
    {
        pii p_cell = q.front();
        q.pop();

        int p_r=  p_cell.first;
        int p_c =  p_cell.second;

        if (p_r == d_r && p_c == d_c)
    return dist[p_r] [p_c] ;

        for (int i = 0; i < 8; i++)
        {
            pii p = dis[i];
            int ch_r = p_r + p.first;
            int ch_c = p_c + p.second;

            if (Valid(ch_r, ch_c) && !visited[ch_r][ch_c])
            {
                q.push({ch_r, ch_c});
                visited[ch_r][ch_c] = true;
                dist[ch_r][ch_c] = dist[p_r][p_c] + 1;
            }
        }
    }

    return -1;
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dist[i][j] = 0;
                visited[i][j] = false;
            }
        }

        int si, sj, di, dj;
        cin >> n >> m >> si >> sj >> di >> dj;

        int step = bfs(si, sj, di, dj);

        cout << step << endl;
    }
    return 0;
}