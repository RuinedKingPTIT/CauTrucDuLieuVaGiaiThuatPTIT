#include<bits/stdc++.h>
#define int long long
using namespace std;
bool compareString(string a, string b){ // xet xem a co lon hon b khong
    if(a.size() < b.size()) return true;
    else if(a.size() > b.size())    return false;
    for(int i = 0 ; i < a.size(); i++){
        if(a[i] > b[i]) return false;
        else if(a[i] < b[i])    return true;
    }  
    return false;
}
string subString(string s1, string s2){
    string res = "";
    if(compareString(s1, s2))   swap(s1, s2);
    int c = 0;
    int n1 = s1.size(); int n2 = s2.size();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for(int i = 0; i < n2; i++){
        int sub = (s1[i] - '0') - (s2[i] - '0') - c;
        if(sub < 0){
            sub += 10;
            c = 1;
        }else c = 0;
        res.push_back(sub + '0');
    }
    for(int i = n2; i < n1; i++){
        int sub = ((s1[i] - '0') - c);
        if(sub < 0){
            sub += 10;
            c = 1;
        }else c = 0;
        res.push_back(sub + '0');
    }
    reverse(res.begin(), res.end());
    string resFinal = "";
    int r = -1;
    for(int i = 0 ; i < res.size(); i++){
        if(res[i] != '0'){
            r = i;
            break;
        }   
    }
    for(int i = r; i < res.size(); i++) resFinal.push_back(res[i]);
    return resFinal;
}
bool checkDiff(string s1, string s2){
    if(s1.size()!=s2.size())    return true;
    for(int i = 0 ; i < s1.size(); i++) if(s1[i] != s2[i])  return true;
    return false;
}
string gcdString(string a, string b){
    while(checkDiff(a, b)){
        if(compareString(a, b)){
            b = subString(b, a);
        }else a = subString(a, b);
    }
    return a;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        string s1, s2;  cin >> s1 >> s2;
        cout << gcdString(s1, s2) << endl;
        // // if(checkDiff(s1, s2))   cout<< 1;
        // // else cout << 0;
        // // if(compareString(s1, s2))   cout<< 1;
        // // else cout << 0;
        // cout << subString(s2, s1);
    }
    return 0;
}