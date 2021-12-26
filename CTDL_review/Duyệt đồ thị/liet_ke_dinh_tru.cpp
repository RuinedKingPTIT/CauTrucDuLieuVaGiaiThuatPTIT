#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, v, k, x, y, a[1005][1005], chuaxet[1005];

void nhap()
{
    cin >> v >> n;
    for (ll i = 1; i <= v; i++)
    {
        for (ll j = 1; j <= v; j++)
            a[i][j] = 0;
    }
    for (ll i = 1; i <= n; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
}
void check()
{
    for (ll i = 1; i <= v; i++)
        chuaxet[i] = 1;
}
void DFS(ll u)
{
    chuaxet[u] = 0;
    for (ll i = 1; i <= v; i++)
    {
        if (a[u][i] && chuaxet[i])
            DFS(i);
    }
}
int demTPLT(){
    int dem = 0;
        for (int i = 1; i <= v; i++)
        {
            if (chuaxet[i])
            {
                dem++;
                DFS(i);
            }
        }
    return dem;
}
int ktDinhTru(int u){
    check();
    int s = demTPLT();
    check();
    chuaxet[u] = 0;
    int r = demTPLT();
    check();
    if(r > s)
    return 1;
    return 0;
}
void in(){
    check();    
    for(int i = 1; i <= v; i++)
    {
        if(ktDinhTru(i))
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}