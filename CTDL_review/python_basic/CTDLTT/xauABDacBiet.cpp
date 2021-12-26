#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
int d = 0;
vector<string> ans;
bool check(int *a){
    int t = 0, dem = 0;
    for(int i = 0 ; i < n; i++){
        if(a[i] == 0) t++;
        else t = 0;
        if(t > k)   return false;
        else if(t == k) dem++;   
    }
    return (dem == 1);
}
void res(int *a)
{
    string in = "";
    if(check(a)){
        d++;
        for(int i = 0 ; i < n; i++){
            if(a[i] == 0) in += 'A';
            else in += 'B';
        }
        ans.push_back(in);
}
    }
    

void init(int *a)
{
    for (int i = 0; i < n; i++)    a[i] = 0;
}

void Try(int i, int *a)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)    res(a);
        else    Try(i + 1, a);
    }
}

int32_t main()
{
    cin >> n >> k;
    int *a = new int[n];
    init(a);
    Try(0, a);
    cout << d << endl;
    for(auto x : ans) cout << x << endl;

    delete a;

    return 0;
}