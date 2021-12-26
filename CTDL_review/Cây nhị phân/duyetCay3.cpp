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

void addNode(tree &t, int a, char c){
    if(c == 'L') t->pLeft = new node(a);
    else if(c=='R') t->pRight = new node(a);
}

int height(NODE *temp){
    if(temp == NULL)    return 0;
    else{
        int lHeight = height(temp->pLeft);
        int rHeight = height(temp->pRight);
        if(lHeight < rHeight) return (rHeight+1);
        else return (lHeight+1);
    }
}


void createTree(tree &t, int a, int b, char c){
    if(t==NULL) return;
    if(t->dta == a) addNode(t, b, c);
    createTree(t->pLeft, a, b, c);
    createTree(t->pRight, a, b, c);
}

void printCurrentLevel(tree t, int level){
    if(t==NULL) return;
    if(level == 1)  cout << t->dta << " ";
    else if(level > 1){
        printCurrentLevel(t->pLeft, level-1);
        printCurrentLevel(t->pRight, level-1);
    }
}

void printAllLever(tree t){
    int h = height(t);
    for(int i = 1; i <= h; i++){
        printCurrentLevel(t, i);
    }
}


void solve(){
    int n;  cin >> n;
    int a, b;
    char c;
    tree t = NULL;
    while(n--){
        cin >> a >> b >> c;
        if(t==NULL){
            // cai them vao chinh la root(goc)
            t = new node(a);
            addNode(t, b, c);
        }else createTree(t, a, b, c);
    }
    printAllLever(t);
    cout << endl;
}
int main(){
    int t;  cin >> t;
    while(t--){
        solve();
    }
    return 0;
}