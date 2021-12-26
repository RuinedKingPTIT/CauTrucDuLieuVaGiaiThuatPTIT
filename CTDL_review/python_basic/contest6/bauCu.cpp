#include<bits/stdc++.h>
using namespace std;
struct bauCu
{
    int dta;
    int occur;
};
bool cmp(bauCu a, bauCu b){
    if(a.occur == b.occur)  return a.dta < b.dta;
    return a.occur > b.occur;
}
int main(){
    int n, m;   cin >> n >> m;
    bauCu a[m];
    
    map<int, int> cnt;
    for(int i = 0 ;i  < n; i++){
        int x = 0;
        cin >> x;
        cnt[x]++;
    }
    int run = 0;
    for(int i =0; i < m ;i++) a[i].dta = i+1;
    for(auto x : cnt){
        a[run++].occur = x.second;
    }   
    sort(a, a+m+1, cmp);
    int maxFirst = a[1].occur;
    bool flag= true;
    for(int i = 0; i < m; i++){
        // cout << a[i].dta << ' ' << a[i].occur << endl;
        if(a[i].occur != maxFirst){
            cout << a[i].dta;
            flag =false;
            break;
        }
    }
    if(flag)    cout << "NONE";

    

   
    return 0;
}