#include <bits/stdc++.h>
using namespace std;
int C[105][105],n,m;
void Floyd(){
    int i,j,k;
    for(k=1; k<=n; k++)
        for(i=1;  i<=n; i++)
            for(j=1; j<=n; j++)
                if (C[i][j] > C[i][k]+C[k][j])
                    C[i][j] = C[i][k]+C[k][j];
}
main(){
    int i,j,u,v,k,q;
    cin >> n >> m;
    for(i=1; i<=n ; i++)
        for(j=1; j<=n ; j++){
            if(i==j) C[i][j] = 0;
            else C[i][j] = 1e9;
        }
    for(i=1;i<=m; i++){
        cin>>u>>v>>k;
        C[u][v] = C[v][u] = k;
    }
    Floyd();
    cin >> q;
    while(q--){
        cin >> u >> v;
        cout << C[u][v] << endl;
    }
}
