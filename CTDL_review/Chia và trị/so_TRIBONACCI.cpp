#include <bits/stdc++.h>

using namespace std;

int m = 1e9 + 7;
struct MaTran
{
    long long fi[2][2];
};
MaTran operator*(MaTran a, MaTran b)
{
    MaTran c;
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            c.fi[i][j] = 0;
            for (int k = 0; k <= 1; k++)
                c.fi[i][j] = (c.fi[i][j] + (a.fi[i][k] * b.fi[k][j]) % m) % m;
        }
    }
    return c;
}
MaTran soN(MaTran a, int n)
{
    if (n == 1)
        return a;
    MaTran c = soN(a, n / 2);
    if (n % 2 == 0)
        return c * c;
    return c * c * a;
}
int main()
{
    long long x, n;
    MaTran a;
    cin >> x;
    while (x--)
    {
        cin >> n;
        a.fi[0][0] = 0;
        a.fi[0][1] = 1;
        a.fi[1][0] = 1;
        a.fi[1][1] = 1;
        MaTran c = soN(a, n - 1);
        cout << c.fi[1][1] << endl;
    }
}