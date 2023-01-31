#include<iostream>
using namespace std;
struct node{
    node*left;
    int data;
    node*right;
    node(int d){
        data = d;
        left = right = NULL;
    }
};
// root left right
void preorder(node*root){
        if(root!=NULL){
            cout<<(root->data)<<" ";
            preorder(root->left);
            preorder(root->right);
        }
}

int main(){
    node* root = new node(11);
    root->left = new node(10);
    root->right = new node(12);
    root->left->left = new node(7);
    root->left->right = new node(8);
    root->right->left = new node(13);
    root->right->right = new node(14);
    preorder(root);

    return 0;
}