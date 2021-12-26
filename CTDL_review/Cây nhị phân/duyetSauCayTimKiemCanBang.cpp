#include<bits/stdc++.h>
using namespace std;
struct node
{
    int dta;
    struct node *pLeft;
    struct node *pRight;
    node(int val){
        dta = val;
        pLeft = NULL;
        pRight = NULL;
    }
};
typedef struct node NODE;
typedef NODE *tree;
tree createBFS(vector<int> a, int start, int end){
    if(start > end) return NULL;
    int mid = (start + end)/2;
    tree t = new node(a[mid]);
    t->pLeft = createBFS(a, start, mid-1);
    t->pRight = createBFS(a, mid+1, end);
    return t;
}
void printBalanceTree(tree t){
    if(t){
        printBalanceTree(t->pLeft);
        printBalanceTree(t->pRight);
        cout << t->dta << " ";
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        sort(a.begin(), a.end());
        tree t = createBFS(a, 0, n-1);
        printBalanceTree(t);
        cout << endl;
    }
    return 0;
}