#include<bits/stdc++.h>
#define int long long
using namespace std;

bool checkSuitable(string s){
    for(int i = 0; i < s.size()-1; i++) if(s[i] == 'H' && s[i+1] == 'H') return false;
    if(s[0] == 'A' || s[s.size()-1] == 'H') return false;
    return true;
}


void res(int *a, int n){
    string s = "";
    for(int i = 0 ; i < n; i++){
        if(a[i] == 0) s.push_back('A');
        else s.push_back('H');
    }
    if(checkSuitable(s)){
        cout << s;
        cout << endl;
    } 
}

void init(int *a, int n){
    for(int i = 0; i < n; i++) a[i] = 0;
}

void Try(int i, int *a, int n){
    for(int j = 0 ; j <= 1; j++){
        a[i] = j;
        if(i==n-1) res(a, n);
        else Try(i+1, a, n);
    }
}




int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int *a = new int[n];
        init(a, n);
        Try(0, a, n);
        delete a;
    }
    return 0;
}