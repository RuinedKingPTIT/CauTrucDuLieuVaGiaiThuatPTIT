#include<bits/stdc++.h>
using namespace std;
int decodeString(string s){
    int n = s.size();
    int *a = new int[n+1];
    a[0] = 1;
    a[1] = 1;
    for(int i = 1; i <= n; i++){
        a[i] = 0;
        if(s[i-1]>'0'){
            a[i] = a[i-1];
        }
        if(s[i-2] == '1' ||(s[i-2] == '2' && s[i-1] < '7'))   a[i]+=a[i-2];
    }
    return a[n];
}
int main(){
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        cout << decodeString(s) << endl;
    }
    return 0;
}