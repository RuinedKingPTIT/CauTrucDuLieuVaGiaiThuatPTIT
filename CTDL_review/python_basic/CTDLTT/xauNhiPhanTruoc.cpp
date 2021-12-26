#include <bits/stdc++.h>
#define int long long
using namespace std;
bool checkSpe(string s)
{
    // neu toan 0 thi in luon ra 1
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '1')
            return false;
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
        // simp
        if (checkSpe(s))
        {
            for(int i= 0 ; i < s.size(); i++)   s[i] = '1';
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '0')
                    s[i] = '1';
                else if (s[i] == '1')
                    s[i] = '0';
            }
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    s[i] = '1';
                    for (int j = i + 1; j <= s.size() - 1; j++)
                        s[j] = '0';
                    break;
                }
            }

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '0')
                    s[i] = '1';
                else if (s[i] == '1')
                    s[i] = '0';
            }
        }

        cout << s << endl;
    }
    return 0;
}