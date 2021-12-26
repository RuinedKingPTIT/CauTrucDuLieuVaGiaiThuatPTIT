#include <bits/stdc++.h>
#define int long long
using namespace std;
bool isTriplet(int *a, int n)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        a[i] *= a[i];
    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0;
        int r = i - 1;
        while (l < r)
        {
            if (a[l] + a[r] == a[i])
                return true;
            (a[l] + a[r] < a[i]) ? l++ : r--;
        }
    }
    return false;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (isTriplet(a, n))
            cout << "YES\n";
        else
            cout << "NO\n";
        delete a;
    }
    return 0;
}