#include <bits/stdc++.h>
#define int long long
using namespace std;

int priority_level(string c)
{
    if (c == "^")    return 3;
    if (c == "*" || c == "/")    return 2;
    if (c == "+" || c == "-")    return 1;
    return -1;
}
vector<string> convert(vector<string> s)
{
    stack<string> cnt;
    vector<string> res;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ")")
        {
            while (!cnt.empty() && cnt.top() != "(")
            {
                res.push_back(cnt.top());
                cnt.pop();
            }
            cnt.pop();
        }
        else if (s[i] == "(")    cnt.push(s[i]);
        else if (s[i] == "^" || s[i] == "*" || s[i] == "/" || s[i] == "+" || s[i] == "-")
        {
           
            while (!cnt.empty() && priority_level(s[i]) <= priority_level(cnt.top()))
            {
                res.push_back(cnt.top());
                cnt.pop();
            }
            cnt.push(s[i]);
        }
        else    res.push_back(s[i]);
    }
    while (!cnt.empty())
    {
        if (cnt.top() != "(")   res.push_back(cnt.top());
        cnt.pop();
    }
    return res;
}
int convertInt(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)    res = res * 10 + (s[i] - '0');
    return res;
}
int solve(vector<string> s)
{
    stack<int> cnt;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]!= "+" && s[i]!= "-" && s[i]!= "*" && s[i]!= "/")     cnt.push(convertInt(s[i]));
        else
        {
            if (s[i] == "+")
            {
                int t1 = cnt.top();    cnt.pop();
                int t2 = cnt.top();    cnt.pop();
                cnt.push(t2 + t1);
            }
            if (s[i] == "-")
            {
                int t1 = cnt.top();    cnt.pop();
                int t2 = cnt.top();    cnt.pop();
                cnt.push(t2 - t1);
            }
            if (s[i] == "*")
            {
                int t1 = cnt.top();    cnt.pop();
                int t2 = cnt.top();    cnt.pop();
                cnt.push(t2 * t1);
            }
            if (s[i] == "/")
            {
                int t1 = cnt.top();    cnt.pop();
                int t2 = cnt.top();    cnt.pop();
                cnt.push(t2 / t1);
            }
        }
    }
    return cnt.top();
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<string> pre_sol;
        for(int i = 0 ; i< s.size(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                string res = string(1, s[i]);
                int j = i;
                while(s[j+1] >= '0' && s[j+1] <= '9'){
                    res += s[j+1];
                    j++;
                }
                pre_sol.push_back(res);
                i=j;
            }else  pre_sol.push_back(string(1, s[i]));
        }
        vector<string> check = convert(pre_sol);
        cout << solve(check) << endl;
    }
    return 0;
}
