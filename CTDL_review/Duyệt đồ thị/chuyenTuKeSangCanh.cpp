#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin.ignore();
	vector<int>ke[n+5];
	for (int i = 1; i<=n; i++){
		getline(cin,s);
		s+=" ";
		int so = 0;
		int j  = 0;
		while (j<s.size()){
			if (s[j]>='0' && s[j]<='9') so = 10*so + (int)(s[j]-'0');
			else if (so>0) {
				ke[i].push_back(so);
				so = 0;
			}
			j++;
		}
	}
	for (int i = 1; i<=n; i++){
		sort(ke[i].begin(),ke[i].end());
	}
	int d[n+5][n+5];
	memset(d,0,sizeof(d));
	for (int i = 1; i<=n; i++){
		for (int j = 0; j<ke[i].size(); j++){
			if (!d[i][ke[i][j]] && !d[ke[i][j]][i]){
				cout<<i<<" "<<ke[i][j]<<endl;
			}
			d[i][ke[i][j]]=d[ke[i][j]][i] = 1;
		}	
	}
	return 0;
}