#include<bits/stdc++.h>
using namespace std;
bool check;
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
void addNode(tree &t, int x, char c){
    if(c=='L') t->pLeft = new node(x);
    else if(c=='R') t->pRight = new node(x);
}
void createTree(tree &t, int a, int b, char c){
    if(t==NULL) return;
    if(t->dta == a) addNode(t, b, c);
    createTree(t->pLeft, a, b, c);
    createTree(t->pRight, a, b, c);
}
void checkEqual(tree t1, tree t2){
    if(t1 == NULL || check == false || t2 == NULL)   return;
    if(t1->dta != t2->dta)  check = false;
    checkEqual(t1->pLeft, t2->pLeft);
    checkEqual(t1->pRight, t2->pRight);
}
int main(){
    int t;  cin >> t;
    while(t--){
        check = true;
        int n1; cin >> n1;
        tree t1 = NULL;
        int a, b;
        char c;
        while(n1--){
            cin >> a >> b >> c;
            if(t1==NULL){
                t1 = new node(a);
                addNode(t1, b, c);
            }else createTree(t1, a, b, c);
        }
        int n2; cin >> n2;
        tree t2 = NULL;
        int d, e;
        char f;
        while(n2--){
            cin >> d >> e >> f;
            if(t2==NULL){
                t2 = new node(d);
                addNode(t2, e, f);
            }else createTree(t2, d, e, f);
        }
        if(n1!=n2)  cout << 0 << endl;
        else{
            checkEqual(t1, t2);
            if(check)   cout << 1 << endl;
            else cout << 0 << endl;
        }
        
    }
    return 0;
}