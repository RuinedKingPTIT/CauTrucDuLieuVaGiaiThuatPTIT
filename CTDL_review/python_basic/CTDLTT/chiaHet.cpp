#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long> save;
    for (int i = 0; i < n; i++)
    {
        long long t = 0;
        cin >> t;

        for (int i = 2; i <= t; i++)
        {
            while (t % i == 0)
            {
                save.push_back(i);
                if (i == t)
                    break;
                t /= i;
            }
        }
    }
   
    for (int i = 0; i < save.size(); i++)
        cout << save[i] << " ";
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            long long t;
            cin >> t;
            vector<long long> save1;
            for (int i = 2; i <= t; i++)
            {
                while (t % i == 0)
                {
                    save1.push_back(i);
                    if (i == t)
                        break;
                    t /= i;
                }
            }
            
            for (int i = 0; i < save1.size(); i++)
                cout << save1[i] << " ";
            cout << endl;
        }
    }
   
    return 0;
}