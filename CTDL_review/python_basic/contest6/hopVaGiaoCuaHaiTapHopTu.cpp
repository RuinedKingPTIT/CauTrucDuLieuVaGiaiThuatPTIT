#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;  
    getline(cin, s1);
    getline(cin, s2);
    for(int i = 0 ; i < s1.size(); i++) if(s1[i] >= 'A' && s1[i] <= 'Z')    s1[i] += 32;
    for(int i = 0 ; i < s2.size(); i++) if(s2[i] >= 'A' && s2[i] <= 'Z')    s2[i] += 32;
    set<string> Union;
    set<string> intersect;
    vector<string> tokens1;
    vector<string> tokens2;
    stringstream check1(s1);
    string inter;
    while(getline(check1, inter, ' ')){
        Union.insert(inter);
        tokens1.push_back(inter);
    }
    stringstream check2(s2);
    string temp;
    while(getline(check2, temp, ' ')){
        Union.insert(temp);
        tokens2.push_back(temp);
    }
    for(auto x : Union) cout << x << " ";
    cout << endl;
    for(auto x : tokens1)   if(find(tokens2.begin(), tokens2.end(), x)!=tokens2.end())  intersect.insert(x);
    for(auto x : intersect) cout << x << ' ';

    return 0;
}