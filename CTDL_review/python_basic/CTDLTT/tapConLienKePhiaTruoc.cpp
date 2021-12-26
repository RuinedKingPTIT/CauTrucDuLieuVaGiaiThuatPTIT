#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int *a = new int[n];
        for (int i = 0; i < k; i++)
            cin >> a[i];
        vector<int> sample{a, a + k};
        vector<bool> v(n);
        for (int i = 0; i < k; i++)
            v[a[i] - 1] = true;
        next_permutation(v.begin(), v.end());
        for (int i = 0; i < n; i++)
            if (v[i])
                cout << (i + 1) << ' ';
        cout << endl;
        delete a;
    }
    return 0;
}