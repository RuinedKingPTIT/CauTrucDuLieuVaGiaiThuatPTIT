#include <bits/stdc++.h>
using namespace std;

int n, m, q;
vector<int> a;
vector<int> T;
int res;

void Update(int k, int l, int r, int i)
{
    if (l > i || r < i)
        return;
    if (l == r)
    {
        T[k] = a[i];
        return;
    }
    int m = (l + r) / 2;
    Update(2 * k, l, m, i);
    Update(2 * k + 1, m + 1, r, i);
    T[k] = max(T[2 * k], T[2 * k + 1]);
}

void Query(int k, int l, int r, int dau, int cuoi)
{
    if (l > cuoi || r < dau)
        return;
    if (dau <= l && cuoi >= r)
    {
        res = max(res, T[k]);
        return;
    }
    int m = (l + r) / 2;
    Query(2 * k, l, m, dau, cuoi);
    Query(2 * k + 1, m + 1, r, dau, cuoi);
}

void Init()
{
    cin >> n >> m;
    a.resize(n + 2);
    T.resize(4 * n);
    for (int i = 0; i < m; i++)
    {
        int u, v, k;
        cin >> u >> v >> k;
        a[u] += k;
        a[v + 1] -= k;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
        Update(1, 1, n, i);
    }
}

void Solve()
{
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int u, v;
        cin >> u >> v;
        res = 0;
        Query(1, 1, n, u, v);
        cout << res << endl;
    }
}

int main()
{
    Init();
    Solve();
}