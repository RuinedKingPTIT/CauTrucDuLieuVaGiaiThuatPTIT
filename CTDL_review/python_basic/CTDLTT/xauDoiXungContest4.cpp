#include<bits/stdc++.h>
using namespace std;
int find(char str[], int n){
	int qhd[n][n],l,h,i;
	memset(qhd,0,sizeof(qhd));
	for (i=1; i<n; i++){
		for (l=0, h=i; h<n; ++l, ++h){
			if (str[l]==str[h]) qhd[l][h]=qhd[l+1][h-1]; else
			qhd[l][h]=min(qhd[l][h-1],qhd[l+1][h])+1;
		}
	}
	return qhd[0][n-1];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[43];
		cin>>s;
		int n=strlen(s);
		cout<<find(s,n)<<endl;
	}
}