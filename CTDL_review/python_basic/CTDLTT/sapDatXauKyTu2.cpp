#include<bits/stdc++.h>
using namespace std;
char getMaxChar(vector<int>& count){
    int max = INT_MIN;
    char res;
    for(int i = 0 ;i < 26; i++){
        if(max < count[i]){
            max = count[i];
            res = 'A' + i;
        }
    }
    return res;
}
string result(string s, int k){
    int n = s.size();
    vector<int> count(26, 0);
    for(int i = 0 ;i < n; i++) count[s[i] - 'A']++;
    char ch_max = getMaxChar(count);
    int max_charIndex = count[ch_max-'A'];
    // if((n/k) < max_charIndex)   return "";
    string res(n, ' ');
    int run = 0;
    while(max_charIndex !=0){
        if(max_charIndex!=0 && run >= n)    return "";
        res[run] = ch_max;
        run += k;
        max_charIndex--;
    }
    count[ch_max - 'A'] = 0;
    for(int i = 0 ; i < 26; i++){
        while(count[i]!=0){
            run = (run >= n) ? 1 : run;
            res[run] = 'A' + i;
            run += k;
            count[i]--;
        }
    }
    return res;
}
int main(){
    int t;  cin >> t;
    while(t--){
        int d;
        string s;
        cin >> d >> s;
        if(result(s,d).size()!=0)   cout << 1 << endl;
        else cout << -1 << endl;
        
    }
    return 0;
}