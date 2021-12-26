#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while (t--){
		string s;
		cin>>s;
		stack<char> a;
		for (int i = 0; i<s.size(); i++){
			if (s[i]=='('|| (s[i]==')' && a.size()==0)) a.push(s[i]);
			else if (s[i]==')'){
				if (a.top()=='('&&a.size()>0) a.pop();
				else a.push(s[i]);
			}
		}
      
		int d1=0,d2=0;
		while (a.size()>0){
			if (a.top()=='(') d1++;
			else d2++;
			a.pop();
		}
		int kq = d1/2+d2/2+d1%2+d2%2;
		cout<<kq<<endl;
	}
	return 0;
}