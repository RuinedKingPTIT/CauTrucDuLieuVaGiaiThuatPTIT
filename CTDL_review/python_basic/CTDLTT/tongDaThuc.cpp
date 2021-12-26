#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.second >= p2.second;
}
int32_t main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        vector<pair<int, int>> cnt;
        vector<int> as;
        for(int i = 0 ;  i< s1.size(); i++){
            int j = i;
            int temp = 0;
            while(s1[j] >= '0' && s1[j] <= '9'){
                temp = temp*10 + (s1[j] - '0');
                j++;
            }
            if(j!=i)    as.push_back(temp);
            i = j;
        }
        for(int i = 0 ; i < as.size()-1; i+=2) cnt.push_back({as[i], as[i+1]});
        as.clear();
        for(int i = 0 ;  i< s2.size(); i++){
            int j = i;
            int temp = 0;
            while(s2[j] >= '0' && s2[j] <= '9'){
                temp = temp*10 + (s2[j] - '0');
                j++;
            }
            if(j!=i)    as.push_back(temp);
            i = j;
        }
       
        for(int i = 0 ; i < as.size()-1; i+=2) cnt.push_back({as[i], as[i+1]});
        sort(cnt.begin(), cnt.end(), cmp);
     
        vector<bool> isUse(cnt.size(), false);
        vector<pair<int, int>> res;
        for(int i = 0 ;  i < cnt.size(); i++){
            int check = cnt[i].second;
            if(!isUse[cnt[i].first]){
                int j;
                for(j = i+1; j < cnt.size(); j++){
                    if(check == cnt[j].second){
                        cnt[i].first += cnt[j].first;
                        isUse[cnt[j].first] = true;
                    }
                }
                res.push_back({cnt[i].first, cnt[i].second});
            }
        }
        for(int i = 0 ; i < res.size()-1; i++)  cout << res[i].first << "*x^" << res[i].second << " + ";
        cout << res[res.size()-1].first << "*x^" << res[res.size()-1].second;
        cout << endl;
    }
    return 0;
}