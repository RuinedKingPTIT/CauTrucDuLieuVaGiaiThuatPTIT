#include<bits/stdc++.h>
using namespace std;
vector<int> res;
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
    int mid = (start+end)/2;
    tree t = new node(a[mid]);
    t->pLeft = createBFS(a, start, mid-1);
    t -> pRight = createBFS(a, mid+1, end);
    return t;
}
void printTree(tree t){
    if(t){
        printTree(t->pLeft);
        printTree(t->pRight);
        res.push_back(t->dta);
    }
    
}
int main(){
    int t;  cin>> t;
    while(t--){
        res.clear();
        int n;  cin >>n ;
        vector<int> a(n);
        for(int& x : a) cin >> x;
        sort(a.begin(), a.end());
        tree t = createBFS(a, 0, n-1);
        printTree(t);
        for(int i = 0 ; i < res.size()-1; i++)  cout << res[i] << ",";
        cout << res[res.size()-1];
        cout << endl;

    }
    return 0;
}