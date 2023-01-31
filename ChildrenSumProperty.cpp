#include<iostream>
using namespace std;
struct node{
    node*left;
    int data;
    node*right;
    node(int k){
        data = k;
        left=right=NULL;
    }
};

bool isCSum(node*root){
    if(root==NULL){
        return true;
    }
    if(root->left==NULL && root->right==NULL){
        return true;
    }
    int sum=0;
    if(root->left!=NULL){
        sum+=root->left->data;
    }
    if(root->right!=NULL){
        sum+=root->right->data;
    }
    return(root->data==sum && isCSum(root->left) && isCSum(root->right));
}
int main(){
    node*root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->right->left = new node(40);
    root->right->right = new node(50);
    cout<<"Children sum property : "<<isCSum(root)<<endl;

    return 0;
}
