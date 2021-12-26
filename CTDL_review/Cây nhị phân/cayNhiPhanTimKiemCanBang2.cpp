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
tree createBST(vector<int> a, int start, int end){
    if(start > end) return NULL;
    int mid = (start+end)/2;
    tree t = new node(a[mid]);
    t->pLeft = createBST(a, start, mid-1);
    t->pRight = createBST(a, mid+1, end);
    return t;
}
void printTree(tree t){
    if(t!=NULL){
         printTree(t->pLeft);
        printTree(t->pRight);
        cout << t->dta << ' ';
        // printTree(t->pLeft);
        // printTree(t->pRight);
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
    
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        tree t = createBST(a, 0, n-1);
        printTree(t);
        cout << endl;
    }
    return 0;
}