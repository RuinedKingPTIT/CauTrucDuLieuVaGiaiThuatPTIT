#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> II;
int n,m,start;
int D[1005], parent[1005];
vector<II> ke[1005];
priority_queue<II, vector<II>, greater<II> >Q;

void Dijkstra(int st){
	int i,u,v;
	for (i = 1; i<=n; i++){
		D[i]=1e9;
		parent[i]=-1;
	}
	D[st]=0;
	while(!Q.empty()) Q.pop();
	Q.push({0,st});
	while(!Q.empty()){
		u=Q.top().second; Q.pop();
		for (int i = 0; i<ke[u].size(); i++){
			v=ke[u][i].second;
			int d_u_v = ke[u][i].first;
			if (D[u] + d_u_v < D[v]){
				D[v]=D[u]+d_u_v;
				parent[v]=u;
				Q.push({D[v],v});
			}
		}
	}
	for (int i = 1; i<=n; i++) cout<<D[i]<<" ";
	cout<<endl;
}
int main(){
	int t; cin>>t;
	while (t--){
		for (int i = 0; i<1005; i++){
			ke[i].clear();
		}
		cin>>n>>m>>start;
		for (int i = 1; i<=m; i++){
			int u, v,k;
			cin>>u>>v>>k;
			ke[u].push_back({k,v});
			ke[v].push_back({k,u});
		}
		Dijkstra(start);
	}
}