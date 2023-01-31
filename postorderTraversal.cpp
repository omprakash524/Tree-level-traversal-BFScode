#include<iostream>
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
// left right root
void postorder(node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<(root->data)<<" ";
    }
}
int main(){
    node*root = new node(5);
    root->left = new node(4);
    root->right = new node(6);
    root->left->left = new node(2);
    root->left->right = new node(3);
    root->right->left = new node(7);
    root->right->right = new node(8);
    postorder(root);

    return 0;
}