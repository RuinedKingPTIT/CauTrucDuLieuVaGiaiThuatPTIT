
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a[1000005];
vector<ll> ve;

ll mSort(ll l, ll r)
{
    if (l >= r)
        return 0;
    ll mid = (l + r) / 2, left = 0, right = 0;
    left = mSort(l, mid);
    right = mSort(mid + 1, r);
    ll sum = 0;
    ll i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (ve[i] <= ve[j])
            a[k++] = ve[i++];
        else
        {
            a[k++] = ve[j++];
            sum += abs(mid + 1 - i);
        }
    }
    while (i <= mid)
        a[k++] = ve[i++];
    while (j <= r)
        a[k++] = ve[j++];
    for (ll i = l; i <= r; i++)
        ve[i] = a[i];
    return sum + left + right;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, tmp, dem = 0;
        cin >> n;
        ll na = n;
        while (na--)
        {
            cin >> tmp;
            ve.push_back(tmp);
            a[dem++] = 0;
        }
        cout << mSort(0, n - 1) << endl;
        ve.clear();
    }
    return 0;
}