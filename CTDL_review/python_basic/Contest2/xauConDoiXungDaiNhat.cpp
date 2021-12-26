#include<bits/stdc++.h>
#define int long long
using namespace std;
bool checkSmetry(string s){
    for(int i = 0 ; i < s.size()/2; i++)    if(s[i]!= s[s.size() - i -1])   return false;
    return true;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        int n = s.size()+1;
        bool flag = true;
        while(n--){
            vector<bool> v(s.size());
            fill(v.end() - n, v.end(),true);
            do{
                string temp = "";
                for(int i = 0 ; i < s.size(); i++)  if(v[i])    temp.push_back(s[i]);
                if(checkSmetry(temp)){
                    cout << temp.size() << endl;
                    flag = false;
                    break;
                }
            }while(next_permutation(v.begin(), v.end()));        
            if(!flag)   break;
        }

    }
    return 0;
}