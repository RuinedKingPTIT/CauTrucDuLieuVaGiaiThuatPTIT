#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int>II;

int n, m;
bool  chuaxet[505];
vector<II> List[1005];
set<II> S;
II canh[1005];
long long ans = 0;

void Prim(){
    int i,u,v;
	while(!S.empty()){
		u = S.begin()->second;
		int d = S.begin()->first;
		chuaxet[u] = 1;
		ans += d;
		S.erase(S.begin());
		for(i=0; i<List[u].size(); i++){
			v = List[u][i].second;
			d = List[u][i].first;
			if(chuaxet[v] == 0 && canh[v].first > d){
				S.erase(canh[v]);
				canh[v].first = d;
				S.insert(canh[v]);
			}
		}
	}
}

main(){
    int t,i,u,v,c;
    cin >> t;
    while(t--){
        for(i=0;i<1005;i++) List[i].clear();
        memset(chuaxet,0,sizeof(chuaxet));
        S.clear(); ans = 0;

        cin >> n >> m;
        for(i=1;i<=m;i++){
            cin >> u >> v >> c;
            List[u].push_back(II(c,v));
            List[v].push_back(II(c,u));
        }


        for(i=1;i<=n;i++){
            canh[i].first = 1e9;
            canh[i].second = i;
        }

        canh[1].first = 0;
        for(i=1;i<=n;i++) S.insert(canh[i]);
        Prim();
        cout << ans << endl;
    }
}

