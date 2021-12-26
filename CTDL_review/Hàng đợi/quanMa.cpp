#include <bits/stdc++.h>
using namespace std;
string depart, des;
map<char, int> mp;
map<pair<int, int>, bool> vis;
int bfs(pair<int, int> start, pair<int, int> end)
{
    vis[start] = true;
    queue<pair<pair<int, int>, int>> q;
    q.push({start, 0});
    while (!q.empty())
    {
        auto top = q.front();
        q.pop();
        int step = top.second;
        int x = top.first.first;
        int y = top.first.second;
        if (x == end.first && y == end.second)
            return step;

        if ((x - 1) >= 1 && (y - 2) >= 1)
        {
            pair<int, int> vt1 = {x - 1, y - 2};
            if (!vis[vt1])
            {
                vis[vt1] = true;
                q.push({vt1, step + 1});
            }
        }
        if ((x - 1) >= 1 && (y + 2) <= 8)
        {
            pair<int, int> vt2 = {x - 1, y + 2};
            if (!vis[vt2])
            {
                vis[vt2] = true;
                q.push({vt2, step + 1});
            }
        }
        if ((x + 1) <= 8 && (y - 2) >= 1)
        {
            pair<int, int> vt3 = {x + 1, y - 2};
            if (!vis[vt3])
            {
                vis[vt3] = true;
                q.push({vt3, step + 1});
            }
        }

        if ((x + 1) <= 8 && (y + 2) <= 8)
        {
            pair<int, int> vt4 = {x + 1, y + 2};
            if (!vis[vt4])
            {
                vis[vt4] = true;
                q.push({vt4, step + 1});
            }
        }
        if ((x + 2) <= 8 && (y - 1) >= 1)
        {
            pair<int, int> vt5 = {x + 2, y - 1};
            if (!vis[vt5])
            {
                vis[vt5] = true;
                q.push({vt5, step + 1});
            }
        }

        if ((x + 2) <= 8 && (y + 1) <= 8)
        {
            pair<int, int> vt6 = {x + 2, y + 1};
            if (!vis[vt6])
            {
                vis[vt6] = true;
                q.push({vt6, step + 1});
            }
        }
        if ((x - 2) >= 1 && (y + 1) <= 8)
        {
            pair<int, int> vt7 = {x - 2, y + 1};

            if (!vis[vt7])
            {
                vis[vt7] = true;
                q.push({vt7, step + 1});
            }
        }
        if ((x - 2) >= 1 && (y - 1) >= 1)
        {
            pair<int, int> vt8 = {x - 2, y - 1};
            if (!vis[vt8])
            {
                vis[vt8] = true;
                q.push({vt8, step + 1});
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vis.clear();
        for (int i = 1; i <= 8; i++)
            mp['a' + i - 1] = i;
        cin >> depart >> des;
        cout << bfs({mp[depart[0]], depart[1] - '0'}, {mp[des[0]], des[1] - '0'}) << endl;
        // cout << mp[depart[0]]<< " " << depart[1] - '0' << endl;
        // cout << mp[des[0]] << " " <<  des[1] - '0' << endl;
    }
    return 0;
}