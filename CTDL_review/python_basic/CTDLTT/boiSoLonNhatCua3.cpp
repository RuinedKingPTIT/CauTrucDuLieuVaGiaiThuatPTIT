#include<bits/stdc++.h>
using namespace std;
void populateAux(int au[], queue<int> q0, queue<int> q1, queue<int> q2, int* top){
    while(!q0.empty()){
        au[(*top)++] = q0.front();
        q0.pop();
    }
    while(!q1.empty()){
        au[(*top)++] = q1.front();
        q1.pop();
    }
    while(!q2.empty()){
        au[(*top)++] = q2.front();
        q2.pop();
    }
}
int maxMultipleOf3(vector<int> a){
    sort(a.begin(), a.end());
    queue<int> q0, q1, q2;
    int i, sum;
    for(i = 0, sum = 0; i < a.size(); i++){
        sum += a[i];
        if((a[i]%3==0)) q0.push(a[i]);
        else if(a[i]%3==1)  q1.push(a[i]);
        else q2.push(a[i]);
    }
    if(sum%3==1){
        if(!q1.empty()) q1.pop();
        else{
            if(!q2.empty()) q2.pop();
            else return 0;
            if(!q2.empty()) q2.pop();
            else return 0;
        }
        
    }else if(sum%3==2){
        if(!q2.empty()) q2.pop();
        else{
            if(!q1.empty()) q1.pop();
            else return 0;
            if(!q1.empty()) q1.pop();
            else return 0;
        }
    }
    int aux[a.size()], top = 0;
    populateAux(aux, q0, q1, q2, &top);
    sort(aux, aux+top, greater<int>());
    for(int i = 0 ; i < top; i++)   cout << aux[i];
    return top;

}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        if(maxMultipleOf3(a) == 0)  cout << -1 << endl;
        else cout << endl;
    }
    return 0;
}