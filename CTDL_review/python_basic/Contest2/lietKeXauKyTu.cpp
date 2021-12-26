#include<bits/stdc++.h>
#define ll long long
using namespace std;


void Process()
{
	char x;
	ll a;
	cin >> x >> a;
	set<string> S;
	function<void(ll, string)> Try = [&](ll idx, string ans)
	{
		if (idx == a)
		{
			S.insert(ans);
			return;
		}
		for (char i = ans.back(); i <= x; i++)
		{
			Try(idx + 1, ans + i);
		}
	};
	for (char i = 'A'; i <= x; i++)
	{
		Try(1, string(1, i));
	}
	for (auto x : S)
	{
		cout << x << endl;
	}
}

int main(){
    Process();
    return 0;
}