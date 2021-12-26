#include<bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int color[1005],n,m;
bool chuaxet[1005], check;

void DFS(int u, int t){
	chuaxet[u]=false;
	for (int i = 0; i<ke[u].size(); i++){
		int v = ke[u][i];
		if (chuaxet[v]){
			if (color[v]==0) color[v]=1-color[u];
			DFS(v,u);
		} else if (color[u]==color[ke[u][i]]) check = false;
	}
}

bool solve(){
	check = true;
	for (int i = 1; i<=n; i++){
		memset(chuaxet,true,sizeof(chuaxet));
		DFS(i,0);
		if (!check) return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		for (int i = 1; i<=1005; i++) ke[i].clear();
		memset(color,0, sizeof(color));
		memset(chuaxet,true,sizeof(chuaxet));
		cin>>n>>m;
		for (int i = 0; i<m; i++){
			int u,v;
			cin>>u>>v;
			ke[u].push_back(v);
			ke[v].push_back(u);
		}
		
		if (solve()) cout<<"YES"<<endl; else cout<<"NO"<<endl;
	}
}