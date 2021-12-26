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
    if(x < t->dta)  addNode(t->pLeft, x);
    else if(x > t->dta) addNode(t->pRight, x);
}
void printTreePreOrder(tree t){
    if(t){
        cout << t->dta << ' ';
        printTreePreOrder(t->pLeft);
        printTreePreOrder(t->pRight);
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
        printTreePreOrder(t);
        cout << endl;
    }
    return 0;
}