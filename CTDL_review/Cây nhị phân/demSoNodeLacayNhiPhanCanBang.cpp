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
int getLeftCount(tree t){
    if(t==NULL) return 0;
    if(t->pLeft == NULL && t->pRight == NULL)   return 1;
    return getLeftCount(t->pLeft) + getLeftCount(t->pRight);
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
    
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        tree t = createBST(a, 0, n-1);
        cout << getLeftCount(t) << endl;
    }
    return 0;
}