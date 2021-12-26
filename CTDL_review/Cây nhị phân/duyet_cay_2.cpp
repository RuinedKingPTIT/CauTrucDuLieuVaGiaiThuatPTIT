#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* l;
	node* r;
	node(int x){
        data = x;
        l = NULL;
        r = NULL;
    }
};

typedef node NODE;

NODE* taoTree(vector<int>& inoder, 
            unordered_map<int,int>& levelorder,int start,int end){
	if(start > end) return NULL;
	
	int index=start;
	
	for(int j=start+1;j<=end;j++){
		if(levelorder[inoder[j]] < levelorder[inoder[index]] )	index=j;
	}
	
	NODE* node=new NODE(inoder[index]);
	
	if(start==end) return node;
	
	node->l=taoTree(inoder,levelorder,start,index-1);
	node->r=taoTree(inoder,levelorder,index+1,end);
	
	return node;
}

void postOrder(NODE* node){
  	if (node != NULL) {  		
		postOrder(node->l);				  		
		postOrder(node->r);
		cout<<node->data<<" ";
	}
    return;
}
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> inorder;
        vector<int> levelorder;
        int x1,x;
        for (int i = 0 ; i < n; i++) {
        	cin>>x;
            inorder.push_back(x);
        }
        
        for (int i = 0 ; i < n; i++) {
            cin>>x1;
            levelorder.push_back(x1);
        }
        
        unordered_map<int,int> levelorderMap;
	    for (int i=0; i < levelorder.size(); i++)
	        levelorderMap[levelorder[i]] = i;
        
        NODE* t=taoTree(inorder,levelorderMap,0,n-1 );
        postOrder(t);
        cout<<endl;
    }
}