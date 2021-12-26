#include <iostream>
using namespace std;

int solve(int *a, int n) {
	int l[n] = {}, r[n] = {}, m;
	
	for(int i = 0; i < n; i++) {
		l[i] = a[i];
		for(int j = 0; j < i; j++)
			if(a[j] < a[i]) l[i] = max(l[i], l[j]+a[i]);
	}
	for(int i = n-1; i >= 0; i--) {
		r[i] = a[i];
		for(int j = n-1; j > i; j--)
			if(a[j] < a[i]) r[i] = max(r[i], r[j]+a[i]);
	}
	
	m = r[0] + l[0] - a[0];
	for(int i = 1; i < n; i++)
		if(r[i]+l[i]-a[i] > m)
			m = r[i]+l[i]-a[i];
	return m;
}

int main() {
	int t; cin >> t;
	for(int x = 0; x < t; x++) {
		int n; cin >> n;
		int *a = new int[n];
		for(int i = 0; i < n; i++) 
			cin >> a[i];
		cout << solve(a, n) << endl;
	}
}