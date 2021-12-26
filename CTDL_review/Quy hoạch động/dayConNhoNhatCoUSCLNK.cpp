#include<bits/stdc++.h>
#define int long long
using namespace std;
int gcdArr(vector<int> a){
    int temp = abs(a[0]);
    for(int i = 1; i < a.size(); i++)   temp = __gcd(temp, abs(a[i]));
    return temp;
}
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n, k;   cin >> n >> k;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        int run = 1;
        bool cond = true;
        while(run <= n){
            vector<bool> v(n);
            bool stop  = true;
            fill(v.end() - run, v.end(), true);
            do{
                vector<int> temp;
                stack<int> index;
                bool flag = true;
                for(int i = 0 ; i < n; i++){
                    if(v[i]){
                        if(index.size() > 0){
                            if(abs(i-index.top())!=1){
                                flag = false;
                                break;
                            }
                        }
                        index.push(i);
                        temp.push_back(a[i]);
                    }    
                } 

                if(flag){
                    if(gcdArr(temp) == k){
                        cout << temp.size() << endl;
                        cond = false;
                        stop = false;
                        break;
                    }
                }
            }while(next_permutation(v.begin(), v.end()));
            if(!stop)   break;
            run++;
        }
        if(cond)    cout << -1 << endl;
    }
    return 0;
}