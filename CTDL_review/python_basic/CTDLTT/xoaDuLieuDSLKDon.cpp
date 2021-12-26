#include<bits/stdc++.h>
#define int long long
using namespace std;
class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(Node** head_ref, int key){
    Node* temp = *head_ref;
    Node* prev = NULL;
    while (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; 
        delete temp;          
        return;
    }
 
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    if (temp == NULL)
        return;
 
    prev->next = temp->next;
 
    delete temp;
}

void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int32_t main(){
    int n; cin >> n;
    int *a = new int[n];
    for(int i = 0 ; i < n; i++) cin >> a[i];
    int x; cin >> x;
    for(int i = 0 ; i < n; i++) if(a[i]!= x) cout << a[i] << " ";
    delete a;
    return 0;
}