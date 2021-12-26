#include <iostream>
using namespace std;

int solve(int **a, int n, int m) {
	int d[n][m] = {};
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(i == j && j == 0) 
				d[i][j] = a[i][j];
			if(i == 0 && j != 0) 
				d[i][j] = a[i][j] + d[i][j-1];
			if(j == 0 && i != 0) 
				d[i][j] = a[i][j] + d[i-1][j];
			if(i > 0 && j > 0) 
				d[i][j] = min(d[i-1][j-1], 
					min(d[i-1][j], d[i][j-1]) ) + a[i][j];
		}
	}
	
	return d[n-1][m-1];
}

int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
		int n, m; cin >> n >> m;
		int **a = new int*[n];
		for(int i = 0; i < n; i++) {
			a[i] = new int[m];
			for(int j = 0; j < m; j++)
				cin >> a[i][j];
		}
		cout << solve(a, n, m) << endl;
	}
}