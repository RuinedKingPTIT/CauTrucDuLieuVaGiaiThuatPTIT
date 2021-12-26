#include <bits/stdc++.h>
using namespace std;

int32_t main(){
    string s;   cin >> s;
    stack<int> st;
    vector<int> permit(s.size(), -1);
    set<int> totalPairBracket;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
            permit[i] = i;
            totalPairBracket.insert(i);
        }
        else if (s[i] == ')')
        {
            int t = st.top();
            permit[i] = t;
            totalPairBracket.insert(t);
            st.pop();
        }
    }
    vector<int> check{totalPairBracket.begin(), totalPairBracket.end()};
    set<string> res;
    int point = check.size()+1;
    while (point--){
        vector<bool> v(check.size());
        fill(v.end() - point, v.end(), true);
        do{
            vector<int> cnt;
            for (int i = 0; i < check.size(); i++){
                if (v[i]){
                    cnt.push_back(check[i]);
                }
            }
            string subString = "";
            if(point==0){
                for(int i = 0 ; i < s.size(); i++)  if(s[i]!='(' && s[i]!=')')  subString.push_back(s[i]);
            }else{
                for (int i = 0; i < s.size(); i++){
                    if(find(cnt.begin(), cnt.end(), permit[i]) == (cnt.end()))
                        subString.push_back(s[i]);
                }
            }
            res.insert(subString);
        } while (next_permutation(v.begin(), v.end()));
    }
    for (auto x : res)    cout << x << endl;
    return 0;
}
