#include<bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(pair<int, int> x, pair<int, int> y){
    if(x.second < y.second) return true;
    return false;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n1, n2; cin >> n1 >> n2;
        vector<pair<int, int>> polinomial1;
        vector<pair<int, int>> polinomial2;
        vector<pair<int, int>> multi_Polinomial;
        for(int i = 0 ; i < n1; i++){
            pair<int, int> temp;
            cin >> temp.first;
            temp.second = i;
            polinomial1.push_back(temp);
        }

        for(int i = 0 ; i < n2; i++){
            pair<int, int> temp;
            cin >> temp.first;
            temp.second = i;
            polinomial2.push_back(temp);
        }
        
        for(int i = 0 ;  i< n1; i++){
            for(int j = 0 ; j < n2; j++){
                pair<int, int> temp;
                temp.first = polinomial1[i].first * polinomial2[j].first;;
                temp.second = polinomial1[i].second + polinomial2[j].second;                
                multi_Polinomial.push_back(temp);
            }
        }
        sort(multi_Polinomial.begin(), multi_Polinomial.end(), cmp);
       for(int i = 0 ; i < multi_Polinomial.size(); i++){
           int t = multi_Polinomial[i].first;
           int j = i;
           int run = 0;
           while(multi_Polinomial[j+1].second == multi_Polinomial[i].second){
               t += multi_Polinomial[j+1].first;
               j++;
               run++;
           }
           i+=run;
           cout << t << ' ';
       }
        cout << endl;
    }
    return 0;
}