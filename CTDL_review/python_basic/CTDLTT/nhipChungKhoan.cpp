#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >>x;
        vector<int> res(n);
        res[0] = 1;
        stack<int> st;
        st.push(0);
        for(int i = 1; i < n; i++){
            while(!st.empty() && a[st.top()] <= a[i])   st.pop();
            if(st.empty())  res[i] = i+1;
            else res[i] = i-st.top();
            st.push(i);
        }
        for(auto x : res)   cout << x << ' ';
        cout << endl;        
    }
    return 0;
}
