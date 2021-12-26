#include <iostream>
using namespace std;

int solve(int n) {
	int *a = new int[n];
	int n2 = 0, n3 = 0, n5 = 0;
	int s2 = 2, s3 = 3, s5 = 5;
	a[0] = 1;
	for(int i = 1; i < n; i++) {
		int c = min(s2, min(s3, s5));
		a[i] = c;
		if(c == s2) {
			n2 = n2 + 1;
			s2 = a[n2] * 2;
		}
		if(c == s3) {
			n3 = n3 + 1;
			s3 = a[n3] * 3;			
		}
		if(c == s5) {
			n5 = n5 + 1;
			s5 = a[n5] * 5;
		}
	}
	return a[n-1];
}

int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
		int n; cin >> n;
		cout << solve(n) << endl;
	}
}