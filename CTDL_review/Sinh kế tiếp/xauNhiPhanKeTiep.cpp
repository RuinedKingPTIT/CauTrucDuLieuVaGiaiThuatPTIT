#include <bits/stdc++.h>
#define int long long
using namespace std;

bool checkFinalModel(string s)
{
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '0')
            return false; // chua la cau hinh cuoi
    return true;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // chay tu cuoi ve, neu gap 0 thi doi thanh 1 va doi cho con lai thanh 0
        if (checkFinalModel(s))
        {
            for (int i = 0; i < s.size(); i++)
                cout << "0";
            cout << endl;
        }
        else
        {
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    s[i] = '1';
                    for (int j = i + 1; j < s.size(); j++)
                        s[j] = '0';
                    break;
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}