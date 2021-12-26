#include<bits/stdc++.h>
using namespace std;
int searchValue(int *a, int x, int n){
    for(int i = 0 ; i < n; i++) if(a[i] == x)   return i;
    return -1;
}
void PostOrder(int *InOrder, int *PreOrder, int n){
    int root = searchValue(InOrder, PreOrder[0], n);
    if(root!=0) PostOrder(InOrder, PreOrder+1, root); // nua tri cua cay
    if(root!=n-1)   PostOrder(InOrder+root+1, PreOrder+root+1, n-root-1); // nua phai cua cay
    cout << PreOrder[0] << " ";
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int *InOrder = new int[n];
        int *PreOrder = new int[n];
        for(int i= 0 ; i < n; i++)  cin >> InOrder[i];
        for(int i= 0 ; i < n; i++)  cin >> PreOrder[i];
        PostOrder(InOrder, PreOrder, n);
        cout << endl;
    }
    return 0;
}
/* 
- duyet preOrder la duyet thueo thu tu node - left - right
- duyet theo InOrder laf duyet theo thu tu Left - node - right
- duyet theo PostOrder la duyet theo thu tu Left - right - node
 */