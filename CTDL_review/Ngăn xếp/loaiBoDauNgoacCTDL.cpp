
#include <bits/stdc++.h>
using namespace std;

bool isParenthesis(char c)
{
    return ((c == '(') || (c == ')'));
}
 

bool isValidString(string str)
{
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            cnt++;
        else if (str[i] == ')')
            cnt--;
        if (cnt < 0)
            return false;
    }
    return (cnt == 0);
}

void removeInvalidParenthesis(string str)
{
    if (str.empty()){
        cout << -1 << endl;
        return;
    }
 
    set<string> visit;
 
    queue<string> q;
    string temp;
    bool level;
 
    q.push(str);
    visit.insert(str);
    bool willPrint = false;
    while (!q.empty())
    {
        str = q.front();  q.pop();
        if (isValidString(str))
        {
            cout << str << " ";
            willPrint = true;
            level = true;
        }
        if (level)
            continue;
        for (int i = 0; i < str.length(); i++)
        {
            if (!isParenthesis(str[i]))
                continue;

            temp = str.substr(0, i) + str.substr(i + 1);
            if (visit.find(temp) == visit.end())
            {
                q.push(temp);
                visit.insert(temp);
            }
        }
    }
    if(!willPrint)  cout <<-1 << endl;
}
int main()
{
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        removeInvalidParenthesis(s);
        cout << endl;
    }
    
 
    return 0;
}