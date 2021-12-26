#include<bits/stdc++.h>
using namespace std;
bool checkRise(vector<int> a){
    for(int i = 1 ; i < a.size(); i++)  if(a[i] < a[i-1]) return false;
    return true;
}
int main(){
    int n, k; cin >> n >> k;
    int *a = new int[n];
    for(int i = 0 ; i < n; i++) cin >> a[i];
    vector<bool> v(n);
    fill(v.end() - k, v.end(), true);
    int d = 0;
    do{
        vector<int> temp;
        for(int i = 0 ; i < n; i++){
            if(v[i]){
                temp.push_back(a[i]);
            }
        }
        if(checkRise(temp))  d++;
    }while(next_permutation(v.begin(), v.end()));
    cout << d << endl;
    delete a;
    return 0;
}