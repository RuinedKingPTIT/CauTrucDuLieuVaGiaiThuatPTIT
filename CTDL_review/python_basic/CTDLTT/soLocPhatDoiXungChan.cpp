#include<bits/stdc++.h>
using namespace std;
void EvenSymetry(int n){
    queue<string> q;
    q.push("6");
    q.push("8");
    int run = 1;
    for(int i = 1; ; i++){
        string t1 = q.front();  q.pop();
        string t2 = q.front();  q.pop();
        if(t1.size() <= n/2 && t2.size()<= n/2){
            string tg1 = t1;
            string tg2 = t2;
            reverse(tg1.begin(), tg1.end());
            reverse(tg2.begin(), tg2.end());
            cout << t1 << tg1 << " ";
            run++;
            if(run > n) break;
            cout << t2 << tg2 << " ";
            run++;
            if(run > n) break;
            
        }else break;
        string temp1 = t1;
        string temp2 = t2;
        q.push(t1.append("6"));
        q.push(temp1.append("8"));
        q.push(t2.append("6"));
        q.push(temp2.append("8"));
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        EvenSymetry(n);
        cout << endl;
    }
    return 0;
}