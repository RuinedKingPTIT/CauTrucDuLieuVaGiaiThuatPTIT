#include <bits/stdc++.h>

using namespace std;
string s[106];
int t, m, n, k;
char s1[5][5];
int check[10][10];
int a[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int b[] = {-1, 0, 1, -1, 1, -1, 0, 1};
vector<string> ve;
void nhap(){
    ve.clear();
    cin>>k>>m>>n;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
            check[i][j] = 0;
    }
    for(int i = 0; i < k; i++)
        cin>>s[i];
    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
            cin>>s1[i][j];
    }
}
void Try(int x, int y, string z){
    for(int i = 0; i < k; i++)
    {
        if(s[i] == z)
            ve.push_back(z);
    }
    for(int i = 0; i < 8; i++)
    {
        int a1 = x + a[i];
        int b1 = y + b[i];
        if(a1 >= 1 && b1 >= 1 && a1 <= m  && b1  <= n && check[a1][b1] == 0)
        {
            check[a1][b1] = 1;
            Try(a1, b1, z+s1[a1][b1]);
            check[a1][b1] = 0;
        }
    }
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                string S = "";
                check[i][j] = 1;
                Try(i, j, S+s1[i][j]);
            }
        }
        if(ve.size())
        {
            for(int i = 0; i < ve.size(); i++)
                cout<<ve[i]<<" ";
            cout<<endl;
        }
        else 
            cout<<-1<<endl;
    }
    return 0;
}