#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int kt = 0;
        int dem = 0;
        int sl = 0;
        vector < vector <char> > sol;
        stack <char> sta;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == ')'){
                kt = 1;
                break;
            }
        }
        if(kt == 0) cout<<"-1";
        else if(s.length() == 1) cout<<"-1";
        else{
            vector <char> temp;
            for(int i = 0; i < s.length(); i++){
                int kt1 = 0;
                for(int j = 0; j < s.length(); j++){
                    if(j != i){
                        if(s[j] == '(') sta.push(s[j]);
                        else if(s[j] == ')'){
                            if(sta.empty() == true){
                                kt1 = 1;
                                break;
                            }
                            else if(sta.top() == '(') sta.pop();
                            else{
                                kt1 = 1;
                                break;
                            }
                        }
                    }
                    if(j == s.length()-1){
                        if(sta.empty() == false){
                            kt1 = 1;
                            break;
                        }
                    }
                }
                if(kt1 == 0){
                    for(int j = 0; j < s.length(); j++){
                        if(i != j){
                            temp.push_back(s[j]);
                        }
                    }
                    sol.push_back(temp);
                    temp.clear();
                    dem++;
                }
            }
            if(dem == 0) cout<<"-1";
            else{
                sol.erase( unique( sol.begin(), sol.end() ), sol.end() );
                for(int k = 0; k < sol.size(); k++){
                    for(int l = 0; l < sol[k].size(); l++)
                    cout<<sol[k][l];
                    cout<<" ";
                }
                cout<<" "
            }
        }
        while(!sta.empty()) sta.pop();
        cout<<endl;
        sol.clear();
    }
    return 0;
}