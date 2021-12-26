#include<bits/stdc++.h>
using namespace std;
bool flag;
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
    if(c == 'L')    t->pLeft = new node(x);
    else if(c=='R') t->pRight = new node(x);
}
void createTree(tree &t, int a, int b, char c){
    if(t==NULL) return;
    if(t->dta == a) addNode(t, b, c);
    createTree(t->pLeft, a, b, c);
    createTree(t->pRight, a, b, c);
}
bool checkUtil(tree t, int level, int *leftLevel){
    if(t == NULL)   return true;
    if(!t->pLeft && !t->pRight){
        if(*leftLevel == 0){
            *leftLevel = level;
            return true;
        }
        return (level == *leftLevel);
    }
    return checkUtil(t->pLeft, level+1, leftLevel) && checkUtil(t->pRight, level+1, leftLevel);
}
void checkNodeTrungGian(tree &t){
    if(t==NULL || flag == false)    return;
    if((t->pLeft == NULL && t->pRight != NULL) || (t->pLeft != NULL && t->pRight == NULL)){
        flag = false;
        return;
    }    
    checkNodeTrungGian(t->pLeft);
    checkNodeTrungGian(t->pRight);
}
bool check(tree t){
    int level = 0, leftLevel = 0;
    return checkUtil(t, level, &leftLevel);
}
void solve(){
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
    checkNodeTrungGian(t);
    if(flag && check(t))    cout << "Yes" << endl;
    else cout << "No" << endl;

}
int main(){
    int t;  cin >> t;
    while(t--){
        flag = true;
        solve();
    }
    return 0;
}