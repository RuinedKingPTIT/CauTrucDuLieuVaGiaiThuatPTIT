#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
vector<vector<int> > res;
vector<int>v;
void Init(){
	cin>>n>>k; v.clear(); res.clear();
	for (int i = 1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
}
void Try(int i, int sum, vector<int> v){
	if (sum>k) return;
	if (sum==k){
		res.push_back(v);
		return;
	}
	for (int j = i; j<=n; j++){
		if (sum+a[j]<=k){
			v.push_back(a[j]);
			Try(j,sum+a[j],v);
			v.pop_back();
		}
	}
}
void Result(){
	for (int i = 0; i<res.size(); i++){
		cout<<'[';
		for (int j = 0; j < res[i].size()-1; j++){
			cout<<res[i][j]<<" ";
		}
		cout<<res[i][res[i].size()-1]<<"]";
	}
	cout<<endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t;
	while(t--){
		Init();
		
		Try(1,0,v);
		if (res.size()==0){
			cout<<-1<<endl;
			continue;
		}
		Result();
	}
	return 0;
}