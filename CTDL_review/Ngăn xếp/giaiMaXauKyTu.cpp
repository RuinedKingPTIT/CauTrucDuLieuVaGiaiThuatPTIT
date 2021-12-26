#include<bits/stdc++.h>
#define int long long
using namespace std;
int convertInt(string nums){
    int ans = 0;
    for(int i = 0 ; i < nums.size(); i++)    ans = (ans*10) + (nums[i] -'0');
    return ans;
}
int32_t main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<string> cnt;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] >= '0' && s[i] <= '9'){
                string nums = string(1, s[i]);
                int j = i;
                while(s[j-1] >= '0' && s[j-1] <= '9'){
                    nums += s[j-1];
                    j--;
                }
                reverse(nums.begin(), nums.end());
                i = j;
                string res = "";
                string temp = "";
                while(!cnt.empty()){
                    if(cnt.top()!= "]" && cnt.top()!= "["){
                        temp += cnt.top();
                    }else if(cnt.top() == "]"){
                        cnt.pop();
                        break;
                    } 
                    cnt.pop();
                }
                for(int k = 1; k <= convertInt(nums); k++)   res +=  temp;
                cnt.push(res);
            }else cnt.push(string(1, s[i]));
        }
        while(!cnt.empty()){
            if(cnt.top()!= "[" && cnt.top()!= "]")  cout << cnt.top();
            cnt.pop();
        }   
        cout << endl;
    }
    return 0;
}