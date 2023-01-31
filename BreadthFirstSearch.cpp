#include<iostream>
#include<queue>
using namespace std;
struct node{
    node*left;
    int data;
    node*right;
    node(int k){
        data = k;
        left = right = NULL;
    }
};
queue<node*>q;
void PrintLevel(node*root){
    if(root==NULL){
        return;
    }else{
        q.push(root);
    }
    while(q.empty()==false){
        node*curr = q.front();
        q.pop();
        cout<<(curr->data)<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}
int main(){
    node*root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(2);
    root->left->right = new node(3);
    root->right->left = new node(7);
    root->right->right = new node(8);
    cout<<"Breadth first search : ";
    PrintLevel(root);

    return 0;
}