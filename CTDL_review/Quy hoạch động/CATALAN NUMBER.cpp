#include <bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
    string s = "";
    while (a.size() < b.size())
        a = "0" + a;
    while (b.size() < a.size())
        b = "0" + b;
    int z = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int tmp = a[i] - 48 + b[i] - 48 + z;
        z = tmp / 10;
        tmp = tmp % 10;
        s = (char)(tmp + 48) + s;
    }
    if (z > 0)
        s = "1" + s;
    return s;
}

string mul(string a, string b)
{
    string s = "";
    int n = a.size();
    int m = b.size();
    int len = n + m - 1;
    int z = 0;
    for (int i = len; i >= 0; i--)
    {
        int tmp = 0;
        for (int j = n - 1; j >= 0; j--)
            if (i - j <= m && i - j >= 1)
            {
                int a1 = a[j] - 48;
                int b1 = b[i - j - 1] - 48;
                tmp += a1 * b1;
            }
        tmp += z;
        z = tmp / 10;
        s = (char)(tmp % 10 + 48) + s;
    }
    while (s.size() > 1 && s[0] == 48)
        s.erase(0, 1);
    return s;
}

void catalanNumber(int n)
{
    string s[105];
    s[0] = 49;
    s[1] = 49;
    for (int i = 2; i <= n; i++)
    {
        s[i] = 48;
        for (int j = 0; j < i; j++)
        {
            s[i] = add(s[i], mul(s[j], s[i - j - 1]));
        }
    }
    cout<< s[n]<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        catalanNumber(n);
    }
    return 0;
}