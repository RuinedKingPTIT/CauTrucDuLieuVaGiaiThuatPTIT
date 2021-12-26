#include<bits/stdc++.h>
using namespace std;
void primitiveNumber(int n){
    queue<string> q;
    q.push("4");
    q.push("5");
    int stop = 1;
    for(int i = 1; ; i++){
        string t1 = q.front(); q.pop();
        string t2 = q.front(); q.pop();
        if(t1.size() <= n/2 && t2.size() <= n/2){
            // string tg1 = t1;
            // string tg2 = t2;
            // reverse(tg1.begin(), tg1.end());
            // reverse(tg2.begin(), tg2.end());
            cout << t1 << string(t1.rbegin(), t1.rend()) << " ";
            stop++;
            cout << stop << " ";
            if(stop>n)  break;
            cout << t2 << string(t2.rbegin(), t2.rend()) << " ";
            stop++;
            cout << stop << " ";
            if(stop>n)  break;
            
        }else break;
        string temp1 = t1;
        string temp2 = t2;
        q.push(t1.append("4"));
        q.push(temp1.append("5"));
        q.push(t2.append("4"));
        q.push(temp2.append("5"));
    }

}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        primitiveNumber(n);
        cout << endl;
    }
    return 0;
}