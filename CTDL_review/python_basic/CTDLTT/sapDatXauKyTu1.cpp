#include<bits/stdc++.h>
using namespace std;
char getMaxChar(vector<int>& count){
    int max = INT_MIN;
    char res;
    for(int i = 0 ; i < 26; i++){
        if(max < count[i]){
            max = count[i];
            res = 'a' + i;
        }
    }
    return res;

}
string result(string s){
    int n = s.size();
    vector<int> count(26, 0);
    for(int i = 0 ; i < n; i++) count[s[i] - 'a']++;
    char max_cha = getMaxChar(count);
    
    int run = 0;
    string res(n, ' ');
    int limit = count[max_cha - 'a'];
    if(limit>(n+1)/2)   return "";
    while(limit!=0){
        res[run] = max_cha;
        run += 2;
        limit--;
    }
    count[max_cha - 'a'] = 0;
    for(int i = 0 ; i < 26; i++){
        while(count[i] > 0){
            run = (run>= n) ? 1 : run;
            res[run] = 'a' + i;
            run+=2;
            count[i]--;
        }
    }
    return res;

}
int main(){
    int t; cin >> t;
    while(t--){
        string s;   cin >> s;
        if(result(s).size()!=0) cout << 1 << endl;
        else cout << -1 << endl;
    }
}