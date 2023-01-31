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
// Print nodes at distance k
void PrintKDist(node*root, int k){
    if(root==NULL){return;}else{
        if(k==0){cout<<(root->data)<< " ";}else{
            PrintKDist(root->left,k-1);
            PrintKDist(root->right,k-1);
        }
    }
}

// Left root right
void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
    // TC : O(n)
    // SC : O(h)
}

// root left right
void preorder(node*root){
        if(root!=NULL){
            cout<<(root->data)<<" ";
            preorder(root->left);
            preorder(root->right);
        }
}
// left right root
void postorder(node*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<(root->data)<<" ";
    }
}

int height(node*root){
    if(root==NULL){return 0;}else{
        return max(height(root->left),height(root->right))+1;
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
    cout<<"inorder traversal   : ";
    inorder(root);cout<<endl;
    cout<<"preorder traversal  : ";
    preorder(root);cout<<endl;
    cout<<"postorder traversal : ";
    postorder(root);cout<<endl;
    cout<<"Height of tree : "<<height(root)<<endl;
    cout<<"Print nodes at distance k : ";  
    PrintKDist(root,2);

    return 0;
}