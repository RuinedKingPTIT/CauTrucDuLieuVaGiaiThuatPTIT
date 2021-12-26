#include<bits/stdc++.h>
using namespace std;
bool checkLucky(string s){
    for(int i = 0 ; i < s.size(); i++)  if(s[i]!= '4' && s[i]!='7') return false;
    return true;
}
int main(){
    int a, b;   cin >> a >> b;
    int l = min(a, b);
    int r = max(a, b);
    int res = 0;
    for(int i = l ; i <= r; i++){
        for(int j = i ;; j++){
            string temp = to_string(j);
            if(checkLucky(temp)){
                res += j;
                break;
            }
        }
    }
    cout << res << endl;
}