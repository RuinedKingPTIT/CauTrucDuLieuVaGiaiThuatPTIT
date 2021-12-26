#include <bits/stdc++.h>
using namespace std;

int t, n, x, y, z;
string s, a;
stack<char> sta;
stack<int> sta2;
int pri(char p)
{
    if (p == '^')
        return 4;
    else if (p == '*' || p == '/')
        return 3;
    else if (p == '+' || p == '-')
        return 2;
    return 1;
}
void hTo()
{
    a = "";
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            a += s[i];
        else if ((s[i] >= 'a' && s[i] <= 'z'))
            a += s[i];
        else if (s[i] == '(')
            sta.push(s[i]);
        else if (s[i] == ')')
        {
            while (sta.size() > 0 && sta.top() != '(')
            {
                a += sta.top();
                sta.pop();
            }
            sta.pop();
        }
        else if (s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-')
        {
            while (sta.size() > 0 && pri(sta.top()) >= pri(s[i]))
            {
                a += sta.top();
                sta.pop();
            }
            sta.push(s[i]);
        }
    }
    while (sta.size() > 0)
    {
        if (sta.top() != '(')
            a += sta.top();
        sta.pop();
    }
}
void tong()
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/')
        {
            x = sta2.top(), sta2.pop();
            y = sta2.top(), sta2.pop();
            if (a[i] == '+')
                z = y + x;
            else if (a[i] == '-')
                z = y - x;
            else if (a[i] == '*')
                z = y * x;
            else if (a[i] == '/')
                z = y / x;
            sta2.push(z);
        }
        else
            sta2.push(a[i] - '0');
    }
    cout << sta2.top() << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        hTo();
        tong();
    }
    return 0;
}