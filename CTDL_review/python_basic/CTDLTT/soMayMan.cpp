#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;	cin >> n;
		int d4, d7, res4, res7;
		for(int i = 1; i < n; i++){
			if(4*i <= n && (n-4*i)%7==0){
				d4 = i;
				d7 = (n-4*i)/7;
				if(4*i + 7*d7 == n){
					res4 = d4;
					res7 = d7;
					break;
				}
			}
		}
		if(4*res4 + 7*res7==n){
			for(int i = 0 ;i < res4; i++)	cout << 4;
			for(int i = 0 ;i < res7; i++)	cout << 7;
			cout << endl;
		}else cout << -1 << endl;
	}

	return 0;
}