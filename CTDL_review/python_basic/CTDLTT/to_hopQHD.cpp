#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;


main(){
	int t, k, n;
	cin >> t;
	while(t--){
		cin>>n>>k;
		long long c[n+1][n+1];
			int i, j;
		for(i = 0 ; i <= n; i++){
			for(j = 0 ; j <= i ; j++){
				if(j==0||j==i)
					c[i][j] = 1;
				else c[i][j] = (c[i-1][j-1]+c[i-1][j])%M; 
			}
		}
		cout << c[n][k] << endl;
	}
}
