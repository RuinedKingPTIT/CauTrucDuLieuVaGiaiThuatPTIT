#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;   cin >> s;
    int a[s.size()];
    for(int i = 0 ; i < s.size(); i++)  a[i] = i;
    do{
        for(int i = 0 ; i < s.size(); i++)  cout <<s[a[i]];
        cout << endl;
    }while(next_permutation(a, a+s.size()));
    return 0;
}