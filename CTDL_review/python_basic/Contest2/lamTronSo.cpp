#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n < 10)    cout << n << endl;
        else{
            vector<int> a;
            while (n != 0){
                a.push_back(n % 10);
                n /= 10;
            }
            for (int i = 0; i < a.size(); i++){
                if (a[i] < 5){
                    a[i] = 0;
                    if(i+1 == a.size()-1)  break; 
                    
                }else{
                    a[i] = 0;
                    if(i+1 == a.size()-1){
                        a[i + 1] += 1;
                        break;
                    }else a[i+1] += 1;
                }
            }
            reverse(a.begin(), a.end());
            for (auto x : a)    cout << x;
            cout << endl;
        }
    }
    return 0;
}