#include <bits/stdc++.h>
using namespace std;

int t, s, n, NT[10005], dp[10005], d, u, v;
void nt(){
    memset(NT, 1, sizeof(NT));
    NT[0] = 0;
    NT[1] = 0;
    for(int i = 2; i <= 100; i++)
    {
        if(NT[i])
        {
            for(int j = i*2; j <= 10000; j+=i)
                NT[j] = 0;
        }
    }
}
int BFS(){
    queue<int> q;
    q.push(s);
    dp[s] = 1;
    while (q.size())
    {
        u = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                d = pow(10, i);
                v = d*((u/d/10)*10+j)+u%d;
                if(v > 1000 && NT[v] && !dp[v])
                {
                    q.push(v);
                    dp[v] = dp[u]+1;
                    if(v == n)
                    return (dp[n]-1);
                }
            }
        }
    }
    
}
int main(){
    cin>>t;
    nt();
    while (t--)
    {
        memset(dp, 0, sizeof(dp));
        cin>>s>>n;
        if(s == n)
        cout<<0<<endl;
        else 
        cout<<BFS()<<endl;
    }
    return 0;
}