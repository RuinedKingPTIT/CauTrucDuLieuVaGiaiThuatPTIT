#include <bits/stdc++.h>
using namespace std;


int t, n, a[1000], b[1000], tmp[1000];

void nhap()
{
    cin >> n;
    int j = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i]>>b[i];
        tmp[i] = 1;
    }
}

void sX()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
}
void in()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(a[i] > b[j])
            tmp[i] = max(tmp[i], tmp[j]+1);
        }
    }
    cout<<tmp[n]<<endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        nhap();
        sX();
        in();
    }
    return 0;
}