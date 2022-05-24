
#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> temp){
    for(int i = 1; i < temp.size(); i++){
        if(temp[i] < temp[i-1]) return false;
    }
    return true;
}
int32_t main()
{
    int n;
    cin >> n;
    vector<int> init(n);
    for(auto &x : init)    cin >> x;
    // vector<int> init{6, 3, 7, 11};
    vector<vector<string>> res;
    for (int i = 2; i <= n; i++)
    {

        vector<bool> v(n);
        fill(v.end() - i, v.end(), true);
        do
        {
            vector<int> res_temp;
            for (int i = 0; i < n; i++)
            {
                if (v[i])
                {
                    // cout << init[i] << ' ';
                    res_temp.push_back(init[i]);
                }
            }
            if(check(res_temp)){
                // for(auto x : res_temp)  cout << x << ' ';
                // cout << endl;
                vector<string> temp_ver2;
                for(auto x : res_temp)  temp_ver2.push_back(to_string(x));  
                res.push_back(temp_ver2);
            } 
        } while (next_permutation(v.begin(), v.end()));
    }
    sort(res.begin(), res.end());
    for(auto x : res){
        for(auto y : x) cout << y << ' ';
        cout << endl;
    }
    return 0;
}