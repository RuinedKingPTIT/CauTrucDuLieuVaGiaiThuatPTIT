#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >ke[1005];
bool ok[1005];
int d[1005];
int a, b;

void BFS(int u, int n, int v){
	
	memset(ok,false,sizeof(ok));
	for (int i = 0; i<=n; i++){
		d[i]=INT_MAX;
	}
	d[u] = 0;
	queue<int>q;
	q.push(u);
	while (!q.empty()){
		int top = q.front(); q.pop();
		ok[top]=true;
		for (int i = 0; i<ke[top].size(); i++){
			int v=ke[top][i].first;
			int h=ke[top][i].second;
			if (d[v]>d[top]+h && !ok[v]){
				d[v]=d[top]+h;
				q.push(v);
				ok[v]=true;
			}
		}
	}
	cout<<d[v]<<endl;
}

int main(){
	int t; cin>>t;
	while (t--){
		for (int i = 0; i<1005; i++){
			ke[i].clear();
		}
		cin>>a; b=a-1;
		for (int i = 0; i<b; i++){
			int u, v;
			cin>>u>>v;
			ke[u].push_back({v,1});
			ke[v].push_back({u,1});
		}
		int q; cin>>q;
		while (q--){
			int x, y; cin>>x>>y;
			BFS(x,a,y);
		}
	}
}