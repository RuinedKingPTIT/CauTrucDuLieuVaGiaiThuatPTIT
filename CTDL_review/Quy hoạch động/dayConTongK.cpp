#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, run = 0;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)    cin >> x;
        sort(a.begin(), a.end());
        vector<vector<int>> res;
        while (run <= n){
            vector<bool> v(n);
            fill(v.end() - run, v.end(), true);
            do{
                vector<int> temp;
                for (int i = 0; i < n; i++){
                    if (v[i])
                        temp.push_back(a[i]);
                }
                if (accumulate(temp.begin(), temp.end(), 0) == k)
                    res.push_back(temp);
            } while (next_permutation(v.begin(), v.end()));
            run++;
        }
        if (res.size() == 0)    cout << -1;
        else{
            sort(res.begin(), res.end());
            for (auto x : res){
                cout << "[";
                for (int i = 0; i < x.size() - 1; i++)
                    cout << x[i] << ' ';
                cout << x[x.size() - 1] << "] ";
            }
        }
        cout << endl;
    }
    return 0;
}