#include<bits/stdc++.h>
using namespace std;
void deleteBracket(string s){
    string res;
    stack<int> st;
    vector<bool> del(s.size(), false);
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] =='('){
            st.push(i);
        }else if(s[i] == ')'){
            pair<int, int> temp;
            temp.first = st.top();  st.pop();
            temp.second = i;
            if(s[temp.first - 1] != '-' || temp.first == 0){
                del[temp.first] = del[temp.second] = true;
            }else if(s[temp.first - 1] == '-'){
                int dem = 0;
                for(int j = temp.first; j <= temp.second; j++){
                    if(s[j] == '+' || s[j] == '-')  dem++;
                }    
                if(dem==0)  del[temp.first] = del[temp.second] = true;
            }
        }
        
    }
    for(int i = 0 ; i < s.size(); i++)  if(!del[i]) cout << s[i];
}
int main(){
    int t;  cin >> t;
    cin.ignore();
    while(t--){
        string s;   getline(cin, s);
        string afterProcess;
        for(int i = 0 ; i < s.size(); i++)  if(s[i]!=' ')   afterProcess += s[i];
        deleteBracket(afterProcess);
        cout << endl;
    }
    return 0;
}