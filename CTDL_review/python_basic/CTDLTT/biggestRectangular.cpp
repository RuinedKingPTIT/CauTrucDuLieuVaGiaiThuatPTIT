#include<bits/stdc++.h>
#define int long long
using namespace std;
int getMaxArea(vector<int> arr){
    int n = arr.size();
    stack<int> s;
    s.push(-1);
    int area = arr[0];
    int i = 0;
    
    vector<int> left_smaller(n, -1), right_smaller(n, n);
    while(i<n){
        while(!s.empty()&&s.top()!=-1&&arr[s.top()]>arr[i]){
            right_smaller[s.top()] = i;
            s.pop();
        }
        if(i>0&&arr[i]==arr[i-1]){
            left_smaller[i] = left_smaller[i-1];
        }else{
            left_smaller[i] = s.top();
        } 
        s.push(i);
        i++;
    }
    for(int j = 0; j<n; j++){
        area = max(area, arr[j]*(right_smaller[j]-left_smaller[j]-1));
    }
    return area;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> arr(n);
        for(int& x : arr) cin >> x;
        cout << getMaxArea(arr) << endl;
    }
    return 0;
}