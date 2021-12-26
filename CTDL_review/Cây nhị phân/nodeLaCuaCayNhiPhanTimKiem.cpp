#include<bits/stdc++.h>
using namespace std;
vector<int> res;
struct node
{
    int data;
    struct node *pLeft;
    struct node *pRight;
};

typedef struct node NODE;
typedef NODE *tree;

void addNode(tree &t, int x){
    if(t == NULL){
        NODE *temp = new NODE;
        temp->data = x;
        temp->pLeft = NULL;
        temp->pRight = NULL;
        t  = temp;
    }else{
        if(x < t->data) addNode(t->pLeft, x);
        else if(x > t->data) addNode(t->pRight, x);
    }
}

void printNodeLeaf(tree t){
    if(t){
        if(!t->pLeft && !t->pRight) res.push_back(t->data);
        printNodeLeaf(t->pLeft);
        printNodeLeaf(t->pRight);
    }
}

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> a(n);
        tree t = NULL;
        for(int& x : a){
            cin >> x;
            addNode(t, x);
        } 
        printNodeLeaf(t);
        for(auto x : res)   cout << x << " ";
        res.clear();
        cout << endl;

    }
    return 0;
}