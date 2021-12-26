#include <bits/stdc++.h>
using namespace std;

int t, n, v, k, x, y, a[1005][1005],sum1, sum2;

void nhap()
{
    cin >> v >> n;
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
            a[i][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }
}
int in(){
    
    for(int i = 1; i <= v; i++)
    {   sum1 = 0, sum2 = 0;
        for(int j = 1; j <= v; j++)
        {
            if(a[i][j])
            sum1++;
        }
        for(int j = 1; j <= v; j++)
        {
            if(a[j][i])
            sum2++;
        }
        if(sum1 != sum2)
        return 0;
    }
    return 1;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        cout<<in()<<endl;
    }
    return 0;
}