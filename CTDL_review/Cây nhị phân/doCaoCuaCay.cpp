#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >ke[100005];
bool ok[100005];
int d[100005];

void max(int d[], int v){
	cout<<(*max_element(d+1,d+v+1));
}

void BFS(int u, int v){
	d[u] = 0;
	queue<int>q;
	q.push(u);
	while (q.size()>0){
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
	max(d,v);
}

int main(){
	int t; cin>>t;
	while (t--){
		for (int i = 0; i<100005; i++){
			ke[i].clear();
		}
		memset(ok,false,sizeof(ok));
		for (int i = 0; i<100005; i++){
			d[i]=INT_MAX;
		}
		int a; cin>>a; int b=a-1;
		for (int i = 0; i<b; i++){
			int u, v;
			cin>>u>>v;
			ke[u].push_back({v,1});
		}
		BFS(1,a); cout<<endl;
	}
}