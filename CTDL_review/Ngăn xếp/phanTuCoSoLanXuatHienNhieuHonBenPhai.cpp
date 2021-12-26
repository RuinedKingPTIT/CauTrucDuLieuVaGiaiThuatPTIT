#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        map<int, int> mp;
        for(int i = 0 ; i < n; i++) mp[a[i]]++;
        vector<pair<int, int>> com(n);

        for(int i = 0 ; i < n; i++) com[i] = {a[i], mp[a[i]]};
        vector<int> res(n);
        stack<pair<int, int>> st;
        for(int i = n-1; i>= 0; i--){
            while(!st.empty() && com[i].second >= st.top().second)  st.pop();
            if(!st.empty()) res[i] = st.top().first;
            else res[i] = -1;
            st.push(com[i]);
        }
        for(int i = 0  ; i< n; i++) cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}