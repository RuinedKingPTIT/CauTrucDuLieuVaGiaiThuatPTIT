#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >>t;
    while(t--){
        int a, b;   cin >> a >> b;
        map<int, int> cnt;
        cnt[0] = 0;
        string t = "";
        for(int i = a; i <= b; i++)    t = t + to_string(i);
        for(int i = 0 ; i <= 9; i++)    cnt[i] = count(t.begin(), t.end(), i+'0');
        // for(int i = 0 ; i <= t.size()/2; i++){
        //     cnt[t[i] - '0']++;
        //     if(i!=(t.size()-i-1))
        //         cnt[t[t.size() - i - 1] - '0']++;
        // }    
        for(auto x : cnt)   cout << x.second << " ";
        cout << endl;
    }
    return 0;
}