#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<pair<int,int>> adj_list[N];
bool visited[N];


class Edge
{
public:
    int a, b, w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }
};


class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};


void prims(int m, int n)
{
    priority_queue<Edge, vector<Edge>, cmp> pq;

    vector<Edge> edgeList;

    pq.push(Edge(m,m, 0));

    int count = 0;
    while (!pq.empty())
    {
        Edge p = pq.top();
        pq.pop();
        int a = p.a;
        int b = p.b;
        int w = p.w;

        if (visited[b]) continue;
           
        visited[b] = true; count++;
        
        edgeList.push_back(p);
        for (int i = 0; i < adj_list[b].size(); i++)
        {
            pair<int,int> ch = adj_list[b][i];
            if (!visited[ch.first])
            {
                pq.push(Edge(b, ch.first, ch.second));
            }
        }
    }
    edgeList.erase(edgeList.begin());
    long long sum = 0;
    for (Edge val : edgeList)
    {
        sum += (long long)(val.w);
    }
    if (count == n)
    {
        cout << sum << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b, w});
        adj_list[b].push_back({a, w});
    }
    prims(1, n);
    return 0;
}