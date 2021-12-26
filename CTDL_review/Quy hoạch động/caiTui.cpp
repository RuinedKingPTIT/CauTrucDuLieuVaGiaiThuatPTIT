#include <iostream>
using namespace std;

int Knapsack(int n, int w, int *v, int *c) {
	int k[n+1][w+1] = {};
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= w; j++) {
			if(j < v[i-1]) 
				k[i][j] = k[i-1][j];
			else {
				int t = c[i-1] + k[i-1][j - v[i-1]];
				k[i][j] = max(t, k[i-1][j]);
			}
		}
	}
	return k[n][w];
}


int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
		int n, V;
		cin >> n >> V;
		int *v = new int[n];
		int *c = new int[n];
		for(int i = 0; i < n; i++)
			cin >> v[i];
		for(int i = 0; i < n; i++)
			cin >> c[i];
		cout << Knapsack(n, V, v, c) << endl;
	}
}