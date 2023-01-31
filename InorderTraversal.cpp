#include<iostream>
using namespace std;
struct Node{
    Node*left;
    int key;
    Node*right;
    Node(int k){
        key = k;
        left=right=NULL;
    }
};
// Left root right
void inorder(Node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
    // TC : O(n)
    // SC : O(h)
}
int main(){
    // when root = NULL then it is empty
    // Node*root = NULL;
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->left->left = new Node(50);
    root->right->right = new Node(60);
    inorder(root);

    return 0;
}