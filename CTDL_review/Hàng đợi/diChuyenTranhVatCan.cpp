#include <bits/stdc++.h>
using namespace std;
int n;
char a[1005][1005];
pair<int, int> x, y;
void nhap()
{

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    cin >> x.first >> x.second >> y.first >> y.second;
}
int bfs()
{
    queue<pair<pair<int, int>, int> > q;
    set<pair<int, int> > vis;
    vis.insert(x);
    q.push(make_pair(x, 0));
    while (!q.empty())
    {
        pair<pair<int, int>, int> s = q.front();
        q.pop();
        if (s.first == y)
        {
            return s.second;
        }

        for (int i = s.first.first - 1; i >= 0; i--)
        {
            if (a[i][s.first.second] == 'X')
                break;
            if (vis.find(make_pair(i, s.first.second)) == vis.end())
            {
                vis.insert(make_pair(i, s.first.second));
                q.push(make_pair(make_pair(i, s.first.second), s.second + 1));
            }
        }

        for (int i = s.first.first + 1; i < n; i++)
        {
            if (a[i][s.first.second] == 'X')
                break;
            if (vis.find(make_pair(i, s.first.second)) == vis.end())
            {
                vis.insert(make_pair(i, s.first.second));
                q.push(make_pair(make_pair(i, s.first.second), s.second + 1));
            }
        }

        for (int i = s.first.second - 1; i >= 0; i--)
        {
            if (a[s.first.first][i] == 'X')
                break;
            if (vis.find(make_pair(s.first.first, i)) == vis.end())
            {
                vis.insert(make_pair(s.first.first, i));
                q.push(make_pair(make_pair(s.first.first, i), s.second + 1));
            }
        }

        for (int i = s.first.second + 1; i < n; i++)
        {
            if (a[s.first.first][i] == 'X')
                break;
            if (vis.find(make_pair(s.first.first, i)) == vis.end())
            {
                vis.insert(make_pair(s.first.first, i));
                q.push(make_pair(make_pair(s.first.first, i), s.second + 1));
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        nhap();
        cout << bfs() <<endl;
    }
    return 0;
}