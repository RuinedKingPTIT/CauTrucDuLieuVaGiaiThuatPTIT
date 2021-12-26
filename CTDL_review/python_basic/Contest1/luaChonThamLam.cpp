#include <bits/stdc++.h>
using namespace std;
string smallestNum(int n, int s)
{
    string res = "";
    if (s == 0)
    {
        if (n == 1)
            res = "0";
        else
            res = "-1";
    }
    else if (s > 9 * n)
        res = "-1";
    else
    {
        int ans[n];
        s -= 1;
        for (int i = n - 1; i > 0; i--)
        {
            if (s > 9)
            {
                ans[i] = 9;
                s -= 9;
            }
            else
            {
                ans[i] = s;
                s = 0;
            }
        }
        ans[0] = s + 1;
        for (int i = 0; i < n; i++)
            res.push_back(ans[i] + '0');
    }

    return res;
}
string largestNum(int n, int s)
{
    string res = "";
    if (s == 0)
    {
        if (n == 1)
            res = "0";
        else
            res = "-1";
    }
    else if (s > 9 * n)
        res = "-1";
    else
    {
        int ans[n];
        for (int i = 0; i < n; i++)
        {
            if (s >= 9)
            {
                ans[i] = 9;
                s -= 9;
            }
            else
            {
                ans[i] = s;
                s = 0;
            }
        }

        for (int i = 0; i < n; i++)
            res.push_back(ans[i] + '0');
    }

    return res;
}
int32_t main()
{
    int n, s;
    cin >> n >> s;
    cout << smallestNum(n, s) << " " << largestNum(n, s);

    return 0;
}