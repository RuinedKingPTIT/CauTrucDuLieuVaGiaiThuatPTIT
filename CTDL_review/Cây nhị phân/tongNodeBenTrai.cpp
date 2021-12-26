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
    if(c=='L')   t->pLeft = new node(a);
    else if(c=='R')    t->pRight = new node(a);
}

void createTree(tree &t, int a, int b, char c){
    if(t==NULL) return;
    if(t->dta == a) addNode(t, b, c);
    createTree(t->pLeft, a, b, c);
    createTree(t->pRight, a, b, c);
}

void sumOfRightNode(tree t, bool dir, int &ans){
    if(t==NULL) return;
    if(dir == true && !t->pLeft && !t->pRight)  ans += t->dta;
    sumOfRightNode(t->pLeft, false, ans);
    sumOfRightNode(t->pRight, true, ans);
}

int leftLeafSum(tree t){
    int sum = 0;
    bool dir = true;
    sumOfRightNode(t, dir, sum);
    return sum;
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
    cout << leftLeafSum(t) << endl;

}   
int main(){
    int t;  cin >> t;
    while(t--){
        solve();
    }
    return 0;
}