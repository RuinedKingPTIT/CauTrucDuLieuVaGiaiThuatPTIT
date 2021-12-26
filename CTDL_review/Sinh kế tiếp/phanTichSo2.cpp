#include <bits/stdc++.h>
#define int long long
using namespace std;
bool stop = false;
vector<string> res;
void printArr(int *x, int &k)
{
    string temp = "";
    temp += "(";
    for (int i = 1; i <= k; i++)
    {
        temp += to_string(x[i]);
        if (i == k)
            break;
        temp += " ";
    }
    temp += ")";
    res.push_back(temp);
}

void next_Division(int *x, int &k)
{
    int R, S, D;
    int i = k;
    while (i > 0 && x[i] == 1)
        i--;
    if (i > 0)
    {
        x[i] -= 1;
        D = k - i + 1;
        R = D / x[i];
        S = D % x[i];
        k = i;
        if (R > 0)
        {
            for (int j = i + 1; j <= i + R; j++)
                x[j] = x[i];
            k += R;
        }
        if (S > 0)
        {
            k += 1;
            x[k] = S;
        }
    }
    else
        stop = true;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stop = false;
        res.clear();
        int n;
        cin >> n;
        int x[100];
        int k = 1;
        x[k] = n;
        while (!stop)
        {
            printArr(x, k);
            next_Division(x, k);
        }
        cout << res.size() << endl;
        for (auto x : res)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}