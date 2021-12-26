#include <bits/stdc++.h>
using namespace std;

void BFS(int s, int v, int e, vector<vector<int> > list, bool *visited) {
	queue<int> queue; queue.push(s);
	visited[s] = true;
	while(!queue.empty() ) {
		s = queue.front(); queue.pop();
		for(int i = 0; i < list[s].size(); i++) {
			if(!visited[list[s][i]]) {
				queue.push(list[s][i]);
				visited[list[s][i]] = true;
			}
		}
	}
}

bool find(vector<int> a, int x) {
	for(int i = 0; i < a.size(); i++)
		if(a[i] == x) return true;
	return false;
}

bool isOk(int v, int e, vector<vector<int> > list) {
	for(int i = 0; i < v; i++) {
		bool visited[v] = {};
		BFS(i, v, e, list, visited);
		for(int j = 0; j < v; j++) {
			if(j != i && visited[j] && !find(list[i], j))
				return false;
		}
	}
	return true;
}

int main() {
	int t; cin >> t;
	for(int x = 0; x < t; x++) {
		int v, e; cin >> v >> e;
		vector<vector<int> > list(v, vector<int>());
		for(int i = 0; i < e; i++) {
			int begin, end;
			cin >> begin >> end;
			list[begin-1].push_back(end-1);
			list[end-1].push_back(begin-1);
		}
		if(isOk(v, e, list) )
			cout << "YES\n";
		else cout << "NO\n";
	}
}