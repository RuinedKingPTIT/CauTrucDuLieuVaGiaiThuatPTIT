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

void addNode(tree &t, int a, char c){
    if(c== 'L') t->pLeft = new node(a);
    else if(c== 'R') t->pRight = new node(a);
}
void createTree(tree &t, int a, int b, char c){
    if(t==NULL) return;
    if(t->dta == a) addNode(t, b, c);
    createTree(t->pLeft, a,b, c);
    createTree(t->pRight, a,b, c);
}
void printTreePreOrder(tree t){
    if(t!=NULL){
        res.push_back(t->dta);
        printTreePreOrder(t->pLeft);
        printTreePreOrder(t->pRight);
    }
}
int main(){
    int t;  cin >> t;
    while(t--){
        res.clear();
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
        printTreePreOrder(t);
        sort(res.begin(), res.end());
        for(auto x : res)   cout << x << " ";
        cout << endl;
    }
    return 0;
}