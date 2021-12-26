#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k, s;
    while (cin >> n >> k >> s)
    {
        if (n == 0 && k == 0 && s == 0)
            break;
        if (k > n)
            cout << 0 << endl;
        else
        {
            vector<bool> v(n);
            fill(v.end() - k, v.end(), true);
            int d = 0;
            do
            {
                int temp = 0;
                for (int i = 0; i < n; i++)
                    if (v[i])
                        temp += (i + 1);
                if (temp == s)
                    d++;
            } while (next_permutation(v.begin(), v.end()));
            cout << d << endl;
        }
    }

    return 0;
}