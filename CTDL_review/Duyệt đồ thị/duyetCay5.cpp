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
void addNode(tree &t, int x, char c){
    if(c=='L')  t->pLeft = new node(x);
    else if(c=='R') t->pRight = new node(x);
}
void createTree(tree &t, int a, int b, int c){
    if(t==NULL) return;
    if(t->dta == a) addNode(t, b, c);
    createTree(t->pLeft, a, b, c);
    createTree(t->pRight, a, b, c);
}

int height(tree t){
    if(t==NULL) return 0;
    else{
        int lHeight = height(t->pLeft);
        int rHeight = height(t->pRight);
        if(lHeight > rHeight)   return (lHeight+1);
        else return (rHeight+1);
    }
}
void printGivenLevel(tree t, int level, int cond){
    if(t==NULL) return;
    if(level == 1)  cout << t->dta << ' ';
    else if(level>1){
        if(cond){
            printGivenLevel(t->pLeft, level-1, cond);
            printGivenLevel(t->pRight, level-1, cond);
        }else{
            printGivenLevel(t->pRight, level-1, cond);
            printGivenLevel(t->pLeft, level-1, cond);
        }
    }
}
void printSpiral(tree t){
    int h = height(t);
    bool con = false;
    for(int i = 1; i <= h; i++){
        printGivenLevel(t, i, con);
        con = !con;
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int a, b;
        char c;
        tree t = NULL;
        while(n--){
            cin >> a >> b >> c;
            if(t==NULL){
                t = new node(a);
                addNode(t, b, c);
            }else createTree(t, a, b, c);
        }
        printSpiral(t);
        cout << endl;
    }
    return 0;
}