#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n<=1)    return false;
    if(n<=3)    return true;
    if(n%2==0 || n%3==0)    return false;
    for(int i = 5; i * i <= n; i+= 6)   if(n%i==0 || n%(i+2) == 0)  return false;
    return true;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >>n ;
        vector<int> a(n);
        for(int&x : a)  cin >> x;
        sort(a.begin(), a.end(), greater<>());
        int run = 1;
        vector<vector<int>> res;
        while(run <= n){
            vector<bool> v(n);
            fill(v.end()-run, v.end(), true);
            do{
                vector<int> cnt;
                for(int i = 0 ; i < n; i++) if(v[i])    cnt.push_back(a[i]);
                if(isPrime(accumulate(cnt.begin(), cnt.end(), 0)))  res.push_back(cnt);
            }while(next_permutation(v.begin(), v.end()));
            run++;
        }
        sort(res.begin(), res.end());
        for(auto x : res){
            for(int j = 0 ; j < x.size(); j++)  cout << x[j] << ' ';
            cout << endl;
        }
    }
    return 0;
}