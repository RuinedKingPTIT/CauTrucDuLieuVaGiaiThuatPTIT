/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
const long int N=1e6+5;
const long int mod=1e9+7;
using namespace std;

int n,m;
vector <int> ke[1005];
bool chuaxet[1005];
vector < pair <int,int> > ans;
void reset()
{
	for(int i=0 ; i<1001 ; i++)	ke[i].clear();
	memset(chuaxet,false,sizeof(chuaxet));
}
void BFS(int s)
{
	queue <int> q;
	q.push(s);
//	chuaxet[s] = false;
	while( !q.empty() )
	{
		int u = q.front();
		q.pop();
		chuaxet[u] = true;
//		cout<<u<<" ";
		int v;
		for(int i=0 ; i<ke[u].size() ; i++)
		{
			v = ke[u][i];
			if( !chuaxet[v] )
			{
				q.push(v);
//				BFS(v);
				chuaxet[v] = true;
			}
		}
	}
}
int dem()
{
	int d = 0;
	for(int i=1 ; i<=n ; i++)
	{
		if(!chuaxet[i])
		{
			d++;
			BFS(i);
		}
	}
	return d;
}
void canhcau(int canh , int res , vector < pair < int , int > > tmp )
{
	for(int i=0 ; i<m ; i++)
	{
		if( i != canh )
		{
			ke[tmp[i].fi].push_back(tmp[i].se);
			ke[tmp[i].se].push_back(tmp[i].fi);
		}
	}
	
	int count = dem();
	
	if( count > res )
	{
		if( tmp[canh].fi < tmp[canh].se )	ans.push_back( { tmp[canh].fi , tmp[canh].se } );
		else	ans.push_back( { tmp[canh].se , tmp[canh].fi } );
	}
}
void solve()
{
	reset();
	ans.clear();
	cin>>n>>m;
	int u,v;
	vector < pair <int,int> > tmp;
	for(int i=0 ; i<m ; i++)
	{
		cin>>u>>v;
		tmp.push_back({u,v});
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	
	int res = dem();
	
	for(int i=0 ; i<m ; i++)
	{
		reset();
		canhcau(i , res , tmp);
	}
	
	sort(ans.begin() , ans.end());
	for(int i=0 ; i<ans.size() ; i++)	cout<<ans[i].fi<<" "<<ans[i].se<<" ";
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
//	ios_base::sync_with_stdio(0);cin.tie(0);
	return 0;
}

/* T.A.N */