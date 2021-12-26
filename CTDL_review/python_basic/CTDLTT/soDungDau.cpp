#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for(int i = 0 ; i < n; i++) cin >> a[i];
        vector<int> res;
        for(int i = 0; i < n; i++){
            if(a[i] > *max_element(a+i+1, a+n)) res.push_back(a[i]);
        }
        if(find(res.begin(), res.end(), a[n-1]) == res.end())
            res.push_back(a[n-1]);
        sort(res.begin(), res.end(), greater<int>());
        for(auto x : res)   cout << x << ' ';
        cout << endl;
        delete a;
    }
}