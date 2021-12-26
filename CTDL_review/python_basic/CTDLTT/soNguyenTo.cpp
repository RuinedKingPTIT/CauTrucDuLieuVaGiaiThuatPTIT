#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++)   if(n%i==0)  return false;
    return true;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, p, s;
        cin >> n >> p >> s;
        vector<int> sample;
        for (int i = p + 1; i <= s; i++)    if (isPrime(i))        sample.push_back(i);
        vector<bool> v(sample.size());
        if (n > sample.size())    cout << 0 << endl;
        else{
            fill(v.end() - n, v.end(), true);
            stack<vector<int>> cnt;
            do{
                vector<int> res;
                for (int i = 0; i < sample.size(); i++){
                    if (v[i])    res.push_back(sample[i]);
                }
                if (accumulate(res.begin(), res.end(), 0) == s)    cnt.push(res);

            } while (next_permutation(v.begin(), v.end()));
            cout << cnt.size() << endl;
            while (!cnt.empty()){
                for (int i = 0; i < cnt.top().size(); i++)    cout << cnt.top().at(i) << ' ';
                cnt.pop();
                cout << endl;
            }
        }
    }
    return 0;
}
