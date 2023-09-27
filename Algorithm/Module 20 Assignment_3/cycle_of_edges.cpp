#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int p[N];
int Level[N];

void dsu_set(int s)
{
    for (int i = 1; i <= s; i++)
    {
        p[i] = -1;
       Level[i] = 0;
    }
}
int Dsu(int n)
{
    while (p[n] != -1)
    {
        n = p[n];
    }
    return n;
}

void dsu_union(int a, int b)
{
    int A = Dsu(a);
    int B = Dsu(b);
    if (A != B)
    {
        if (Level[A] > Level[B])
        {
            p[B] = A;
        }
        else if (Level[B] > Level[A])
        {
            p[A] = B;
        }
        else
        {
            p[B] = A;
            Level[A]++;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    dsu_set(n);

    int cycle = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int A = Dsu(a);
        int B = Dsu(b);

        if (A == B)
        {
            cycle++;
        }
        else
        {
            dsu_union(a, b);
        }
    }
    cout << cycle << endl;
    return 0;
}