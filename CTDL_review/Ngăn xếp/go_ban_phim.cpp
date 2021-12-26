#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<char> a;
    vector<char> b;
    for (long long i = 0; i < str.length(); i++)
    {
        if (a.size() > 0 && str[i] == '-')
        {
            a.pop_back();
        }
        else if (a.size() > 0 && str[i] == '<')
        {
            b.push_back(a[a.size() - 1]);
            a.pop_back();
        }
        else if (b.size() > 0 && str[i] == '>')
        {
            a.push_back(b[b.size() - 1]);
            b.pop_back();
        }
        else if ((str[i] != '-' && str[i] != '>' && str[i] != '<'))
        {
            a.push_back(str[i]);
        }
    }
    for (long long i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
    for (long long i = b.size() - 1; i >= 0; i--)
    {
        cout << b[i];
    }
    return 0;
}