#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >>n;
        vector<int> a;
        while(n!=0){
            a.push_back(n%10);
            n/=10;
        }
        reverse(a.begin(), a.end());
        int run = 1;
        int max_num = INT_MIN;
        bool flag= true;
        while(run <= a.size()){
            vector<bool> v(a.size());
            fill(v.end() - run, v.end(), true);
            do{
                int temp = 0;
                for(int i = 0 ; i < a.size(); i++)  if(v[i])    temp = temp*10 + a[i];
                int check_cube = round(cbrt(temp));
                if(check_cube * check_cube * check_cube == temp && temp > max_num){
                    max_num = temp;   
                    flag = false;
                }  

            }while(next_permutation(v.begin(), v.end()));
            run++;
        }
        if(flag)    cout << -1 << endl;
        else cout << max_num << endl;
    }
    return 0;
}