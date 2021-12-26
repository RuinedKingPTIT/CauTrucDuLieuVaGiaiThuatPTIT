#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int n, k, run;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    run = 1;
    int dem = 0;
    while (run <= n)
    {
    
        int totalSum = 0;
        vector<bool> v(n);
        fill(v.end() - run, v.end(), true);
        do
        {
            int t = 0;
            for (int i = 0; i < n; ++i)
                if (v[i])
                    t += a[i];
            if (t == k)
            {
                dem++;
                for (int i = 0; i < n; ++i)
                {
                    if (v[i])
                    {
                        cout << a[i] << " ";
                    }
                }
                cout << "\n";
            }

        } while (next_permutation(v.begin(), v.end()));
        run++;
    }
    cout << dem;

    return 0;
}