#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int *InOrder = new int[n];
        int *LevelOrder = new int[n];
        for(int i = 0 ; i< n; i++)  cin >> InOrder[i];
        for(int i = 0 ; i< n; i++)  cin >> LevelOrder[i];
    }
    return 0;
}
/* 
- duyet preOrder la duyet thueo thu tu node - left - right
- duyet theo InOrder laf duyet theo thu tu Left - node - right
- duyet theo PostOrder la duyet theo thu tu Left - right - node
 */