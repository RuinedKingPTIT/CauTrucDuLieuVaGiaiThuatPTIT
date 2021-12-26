#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<int> q;
        while (n--)
        {
            int stt;
            cin >> stt;
            switch (stt)
            {
            case 1:
            {
                cout << q.size() << endl;
                break;
            }
            case 2:
            {
                if (q.empty())
                    cout << "YES\n";
                else
                    cout << "NO\n";
                break;
            }
            case 3:
            {
                int temp;
                cin >> temp;
                q.push(temp);
                break;
            }
            case 4:
            {
                if (!q.empty())
                    q.pop();
                break;
            }
            case 5:
            {
                if (!q.empty())
                    cout << q.front() << endl;
                else
                    cout << -1 << endl;
                break;
            }
            case 6:
            {
                if (!q.empty())
                    cout << q.back() << endl;
                else
                    cout << -1 << endl;
                break;
            }
            default:
                break;
            }
        }
    }
    return 0;
}