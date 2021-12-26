#include <iostream>
using namespace std;

int  solve(int n, int x, int y, int z) {
	int c[n+1] = {};
	c[1] = x;
	
	for(int i = 2; i <= n; i++) {
		int t = (i%2==0)?c[i/2]+z:c[(i+1)/2]+y+z;
		c[i] = min(t, c[i-1]+x);
	}
	return c[n];
}

int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		cout << solve(n, x, y, z) << endl;
	}
}