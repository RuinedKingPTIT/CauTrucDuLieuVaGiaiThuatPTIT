
#include <bits/stdc++.h>
using namespace std;

int t, v, n, m, a[105], x, y, flat, ok;
vector<int> ve[105];

void nhap()
{
	cin >> v >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		ve[x].push_back(y);
		ve[y].push_back(x);
	}
}
void check()
{
	memset(a, 0, sizeof(a));
	for (int i = 0; i < 105; i++)
		ve[i].clear();
}
int tomau(int i, int l){
	for(int j = 0; j < ve[i].size(); j++)
	{
		if(l == a[ve[i][j]])
		return 0;
	}
	return 1;
}
int Try(int i)
{
	if(i == v+1)
	return 1;
	for (int j = 1; j <= m; j++)
	{
		if (tomau(i, j))
		{
			a[i] = j;
			if (Try(i+1))
				return 1;
			a[i] = 0;
		}
	}
	return 0;
}
int main()
{
	cin >> t;
	while (t--)
	{
		check();
		nhap();
		if (Try(1))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}