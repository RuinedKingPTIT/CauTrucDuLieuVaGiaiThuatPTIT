#include<bits/stdc++.h>
using namespace std;
int main (){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for (int i = 0; i<n; i++) cin>>a[i];
		sort(a.begin(), a.end());
		int kq = n;
		for (int i = n/2-1, j=n-1; i>=0 && j>=n/2;){
			if (a[j]>=2*a[i]){
				kq--;
				i--;
				j--;
			}
			else i--;
		}
		cout<<kq<<endl;
	}
	return 0;
}