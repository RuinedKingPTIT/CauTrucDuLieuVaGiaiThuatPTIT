#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, k, x[100];

void init()
{
    cin >> n >> k;
}

void res()
{
    if (count(x, x + n, 1) == k)
    {
        for (int i = 0; i < n; i++)    cout << x[i];
        cout << "\n";
    }
}

void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n-1)
            res();
        else
            Try(i + 1);
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        Try(0);
    }
    return 0;
}