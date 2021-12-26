#include <bits/stdc++.h>
#define int long long
using namespace std;
#define max 100

int b[max], n, k;

void in()
{
    vector<pair<int, char>> sample = {
        {1, 'A'},
        {2, 'B'},
        {3, 'C'},
        {4, 'D'},
        {5, 'E'},
        {6, 'F'},
        {7, 'G'},
        {8, 'H'},
        {9, 'I'},
        {10, 'J'},
        {11, 'K'},
        {12, 'L'},
        {13, 'M'},
        {14, 'N'},
        {15, 'O'},
        {16, 'P'},
    };

    for (int i = 1; i <= k; i++)
        cout << sample[b[i] - 1].second;
    cout <<endl;
}
void init()
{
    cin >> n >> k;
    b[0] = 0;
}
void Try(int i)
{
    int j;
    for (j = b[i - 1] + 1; j <= n - k + i; j++)
    {
        b[i] = j;
        if (i == k)
            in();
        else
            Try(i + 1);
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        Try(1);
    }
    return 0;
}
