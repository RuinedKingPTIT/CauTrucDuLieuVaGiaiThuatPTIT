#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    cin.ignore();
    string s;
    vector<int> ke[n+5];
    for(int i = 1; i<= n; i++){
        getline(cin, s);
        int so = 0;
        int j = 0;
        s += " ";
        while(j < s.size()){
            if(s[j] >= '0' && s[j] <= '9')  so = so*10 + (s[j] - '0');
            else if(so>0){
                ke[i].push_back(so);
                so = 0;
            }
            j++;
        }
    }
    for(auto x : ke)    sort(x.begin(), x.end());
    int matrix[n+5][n+5];
    memset(matrix, 0, sizeof(matrix));
    for(int i = 1; i <= n; i++){
        for(int j = 0 ;j  < ke[i].size(); j++)  matrix[i][ke[i][j]] = matrix[ke[i][j]][i] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}