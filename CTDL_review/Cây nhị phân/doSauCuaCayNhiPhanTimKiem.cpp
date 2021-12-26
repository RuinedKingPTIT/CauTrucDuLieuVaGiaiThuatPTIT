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
void addNode(tree &t, int x){
    if(t==NULL) t = new node(x);
    else{
        if(x < t->dta) addNode(t->pLeft, x);
        else if(x>t->dta) addNode(t->pRight, x);
    }
}
int heightTree(tree t){
    if(t==NULL) return 0;
    else{
        int lHeight = heightTree(t->pLeft);
        int rHeight = heightTree(t->pRight);
        if(lHeight > rHeight)   return (lHeight + 1);
        else return (rHeight + 1);
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        tree t = NULL;
        vector<int> a(n);
        for(int& x : a){
            cin >> x;
            addNode(t, x);
        }
        cout << heightTree(t)-1 << endl;
    }
    return 0;
}