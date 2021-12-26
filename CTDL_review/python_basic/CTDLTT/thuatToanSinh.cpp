#include <bits/stdc++.h>
#define int long long
using namespace std;

bool checkSymmetricalArr(int *a, int n)
{
    for (int i = 0; i < n / 2; i++)
        if (a[i] != a[n - i - 1])
            return false;
    return true;
}

void init(int *a, int n)
{
    for (int i = 0; i < n; i++)
        a[i] = 0;
}
void in(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
}
void Try(int i, int *a, int n)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
        {
            if (checkSymmetricalArr(a, n))
                in(a, n);
        }

        else
            Try(i + 1, a, n);
    }
}

int32_t main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    init(a, n);
    Try(0, a, n);

    delete a;

    return 0;
}