#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N = 1e3+5;
char grid[N][N];
int n, m;
bool visited[N][N];
vector<pii> dist = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool Valid(int si, int sj)
{
    if (si >= 0 && si < n && sj >= 0 && sj < m && grid[si][sj] == '.')
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

    for (int i = 0; i < m; i++)
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si, sj;
    cin >> si >> sj;

    dfs(si, sj);
    int di,dj;
    cin >> di >> dj;
    
    if (visited[di][dj]) cout << "YES";
        
    else cout << "NO";
        

    return 0;
}