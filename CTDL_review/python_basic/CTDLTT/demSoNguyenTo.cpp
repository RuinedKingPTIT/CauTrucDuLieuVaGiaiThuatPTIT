#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        int N = b;
        bool check[N + 1];
        for (int i = 2; i <= N; i++)    check[i] = true;
        for (int i = 2; i <= N; i++)
        {
            if (check[i] == true)
            {
                for (int j = 2 * i; j <= N; j += i)    check[j] = false;
            }
        }
        int dem = 0;
        for (int i = a; i <= b; i++)
        {
            if (check[i] == true)
                ++dem;
        }
        cout << dem << endl;
    }
}