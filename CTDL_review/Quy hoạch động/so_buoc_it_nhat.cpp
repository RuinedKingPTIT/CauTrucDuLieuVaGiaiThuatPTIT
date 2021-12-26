#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 1005;
ll t, n, a[M], tmp[M], mx;

void nhap()
{
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < M; i++)
        tmp[i] = 0;
    tmp[0] = 1;
}
void in()
{
    for (ll i = 1; i < n; i++)
    {
        mx = 0;
        for (ll j = 0; j < i; j++)
        {
            if (a[i] >= a[j])
                mx = max(mx, tmp[j]);
        }
        tmp[i] = mx + 1;
    }
    sort(tmp, tmp + n);
    cout << n - tmp[n - 1] << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}