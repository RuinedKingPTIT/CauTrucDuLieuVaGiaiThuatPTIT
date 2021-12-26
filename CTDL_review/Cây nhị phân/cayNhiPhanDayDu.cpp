#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *pLeft;
    struct node *pRight;
};
typedef struct node NODE;
typedef NODE *tree;



void noiNode(tree &t, int a, int c){
    if(c == 'L'){
        NODE *temp = new NODE;
        temp->data = a;
        temp->pLeft = NULL;
        temp->pRight = NULL;
        t->pLeft = temp;
    }else if(c=='R'){
        NODE *temp = new NODE;
        temp->data = a;
        temp->pLeft = NULL;
        temp->pRight = NULL;
        t->pRight = temp;
    }
}
void createTree(tree &t, int a, int b, char c){
    if(t==NULL) return;
    if(t->data == a)    noiNode(t, b, c);
    createTree(t->pLeft, a, b, c);
    createTree(t->pRight, a, b, c);
}

bool isFullTree(tree t){
    if(t == NULL)   return true;
    if(!t->pLeft && !t->pRight) return true;// neu ca hai nhanh deu null thi reurn true
    if(t->pLeft && t->pRight)   return (isFullTree(t->pLeft) && isFullTree(t->pRight));
    return false;
}
void solve(){
    int n, a, b;
    char c;
    tree t = NULL;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(t==NULL){
            NODE *temp = new NODE;
            temp->data = a;
            temp->pLeft = NULL;
            temp->pRight = NULL;
            t = temp;
            noiNode(t, b, c);
        }else   createTree(t, a, b, c);
    }
    if(isFullTree(t))   cout << 1 << endl;
    else cout << 0 << endl;
    
}

int main(){
    int t;  cin >> t;
    while(t--){
        solve();
    }
    return 0;
}