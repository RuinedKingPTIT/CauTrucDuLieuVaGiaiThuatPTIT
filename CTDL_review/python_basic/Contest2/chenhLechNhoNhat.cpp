#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;   cin >> n >> k;
    vector<string> a(n);
    for(int i = 0 ; i < n; i++)    cin >> a[i];
    vector<int> digit(k);
    for(int i = 0 ; i < k; i++) digit[i] = i+1;
    int min_diff = INT_MAX;
    do{
        vector<int> temp;
        for(int i = 0 ; i < n;i++){
            int res = 0;
            for(int j = 0 ; j < k; j++)    res = res * 10 + (a[i][digit[j] -1] - '0'); 
            temp.push_back(res);
        }
        if(min_diff > *max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end()))  min_diff = *max_element(temp.begin(), temp.end()) - *min_element(temp.begin(), temp.end());
    }while(next_permutation(digit.begin(), digit.end()));
    cout << min_diff;
    return 0;
}