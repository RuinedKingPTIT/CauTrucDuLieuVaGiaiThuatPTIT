#include <bits/stdc++.h>
#define int long long
using namespace std;
int diffString(vector<int> v1, vector<int> v2){
    int res = 0;
    for(int i = 0; i < v1.size(); i++)  if(find(v2.begin(), v2.end(), v1[i]) == v2.end())   res++;
    return res;
}
bool checkSampleArr(vector<int> v1, vector<int> v2){
    for(int i = 0 ; i< v1.size(); i++)  if(v1[i]!=v2[i]) return false;
    return true;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;   cin >> n >> k;
        int *a = new int[k];
        for(int i = 0 ; i < k; i++)    cin >> a[i]; 
        vector<int> sample{a, a+k};
       
        vector<bool> v(n);
        fill(v.end() - k, v.end(), true);
        stack<vector<int>> cnt;
        do{
            vector<int> temp;
            for (int i = 0; i < n; ++i)    if (v[i])    temp.push_back(i+1);
            cnt.push(temp);
            if(checkSampleArr(sample, cnt.top()) && cnt.size() == 1){
                cout << k << endl;
                break;
            }else if(checkSampleArr(sample, cnt.top()) && cnt.size() > 1){
                cnt.pop();
                cout << diffString(sample, cnt.top()) << endl;
                break;
            }
        } while (next_permutation(v.begin(), v.end()));
        delete a;
    }

    return 0;
}