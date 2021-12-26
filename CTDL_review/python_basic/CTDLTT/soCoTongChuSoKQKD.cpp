#include <iostream>
using namespace std;


int solve(int n, int k) {
	int a[n+1][k+5] = {};
	for(int i = 1; i <= 9; i++)
			a[1][i] = 1;
	for(int i = 1; i <= n; i++) 
		for(int so = 0; so <= 9; so++) 
			for(int j = so; j <= k; j++)
				a[i][j] =(a[i][j] + a[i-1][j-so])%(1000000000+7);
	return a[n][k];
}

int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
		int n, k;
		cin >> n >> k;
		cout << solve(n, k) << endl;
	}
}