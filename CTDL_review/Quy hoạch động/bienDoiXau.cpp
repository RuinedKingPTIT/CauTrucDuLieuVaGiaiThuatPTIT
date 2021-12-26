#include <iostream>
using namespace std;

int solve(string s1, string s2) {
	int n1 = s1.size();
	int n2 = s2.size();
	int a[n1+1][n2+1] = {};
	
	for(int i = 0; i <= n2; i++)
		a[0][i] = i;
	for(int i = 0; i <= n1; i++)
		a[i][0] = i;
	
	for(int i = 1; i <= n1; i++) {
		for(int j = 1; j <= n2; j++) {
			if(s1[i-1] == s2[j-1]) a[i][j] = a[i-1][j-1];
			else a[i][j] = min(a[i-1][j-1], min(a[i-1][j], a[i][j-1]))+1;
		}
	}
	return a[n1][n2];
}

int main() {
	int t; cin >> t;
	for(int i = 0; i < t; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		cout << solve(s1, s2) << endl;
	}
}