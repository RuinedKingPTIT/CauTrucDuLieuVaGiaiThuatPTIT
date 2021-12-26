#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node
{
    int data;
    struct node *pLeft;
    struct node *pRight;
};

typedef struct node NODE;
typedef NODE *tree;

void khoiTao(tree &t){
    t = NULL;
}

void themNode(tree &t, int x){
    if(t==NULL){
        NODE *p = new NODE;
        p -> data = x;
        p -> pLeft = NULL;
        p -> pRight = NULL;
        t = p;
    }else{
        if(x < t->data) themNode(t->pLeft, x);
        else if(x > t->data)    themNode(t->pRight, x);
    }
}

void printTree(tree t){
    if(t!=NULL){
        // duyet theo left ight node
        printTree(t->pLeft);
        printTree(t->pRight);
        cout << t->data << " ";
    }
}


int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        tree t;
        khoiTao(t);
        for(int& x : a){
            cin >> x;
            themNode(t, x);
        } 
        printTree(t);
        cout << endl;
    }
    return 0;
}