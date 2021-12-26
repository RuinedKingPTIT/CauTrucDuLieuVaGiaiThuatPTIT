#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string sumOfLN(string s1, string s2)
{
    string res = "";
    while (s1.length() > s2.length())
        s2 = "0" + s2;
    while (s1.length() < s2.length())
        s1 = "0" + s1;
    int c = 0;
    for (int i = s1.length() - 1; i >= 0; i--)
    {
        int sum = (s1[i] - '0') + (s2[i] - '0') + c;
        res.push_back((sum % 10) + '0');
        c = sum / 10;
    }
    if (c)
        res.push_back(c + '0');
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
        if (s1[i] == '6')
            s1[i] = '5';
    for (int i = 0; i < s2.length(); i++)
        if (s2[i] == '6')
            s2[i] = '5';
    string min_sum = sumOfLN(s1, s2);
    for (int i = 0; i < s1.length(); i++)
        if (s1[i] == '5')
            s1[i] = '6';
    for (int i = 0; i < s2.length(); i++)
        if (s2[i] == '5')
            s2[i] = '6';
    string max_sum = sumOfLN(s1, s2);
    ll res_min = 0, res_max = 0;
    for (int i = 0; i < min_sum.size(); i++)
        res_min += (min_sum[i] - '0') * (ll)pow(10, min_sum.size() - i - 1);
    for (int i = 0; i < max_sum.size(); i++)
        res_max += (max_sum[i] - '0') * (ll)pow(10, max_sum.size() - i - 1);
    cout << res_min << " " << res_max << endl;
    return 0;
}