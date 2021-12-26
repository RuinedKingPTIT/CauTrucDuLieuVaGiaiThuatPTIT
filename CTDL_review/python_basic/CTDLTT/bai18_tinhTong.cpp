#include<bits/stdc++.h>
#define int long long
using namespace std;

int cal(vector<char> a, int b){
    int res = 0;
    int run = 0;
    for(int i = 0 ; i < a.size(); i++){
        res += (a[i] - '0') * (int)pow(b, b - run - 1);
        run++;
    }  
    return res;
}
int32_t main(){
    string s;   cin >> s;
    int k, b, m;    cin >> k >> b >> m;
    stack<int> st;
    
    
    vector<char> a{s.begin(), s.begin() + k - 1};
    int res = (cal(a, b) + (s[k-1] - '0'))%m;

    for(int i = 0 ; i < s.size(); i++){
        vector<char> a{s.begin() + i + 1, s.begin() + i + k};
        st.push(cal(a, b));
        if((i+k) < s.size())
      res += (st.top() + (s[i+k] - '0'))%m;
        // cout << res << endl;
    }
    cout << res;
    
    
    return 0;
}
