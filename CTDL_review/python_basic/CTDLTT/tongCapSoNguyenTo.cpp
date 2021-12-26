#include <bits/stdc++.h>
#define int long long
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = false;
        for (int i = 2; i <= sqrt(n)+1; i++)
        {
            if (isPrime(i))
            {
                if (2 * i == n){
                    cout << i << " " << i << endl;
                    flag = true;
                    break;
                }
                    
                else if (isPrime(n - i)){
                    cout << i << " " << n - i << endl;
                    flag = true;
                    break;
                }   
                    
            }
        }

        if (!flag)
            cout << -1 << endl;
    }
    return 0;
}