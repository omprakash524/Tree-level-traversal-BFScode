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

int maxlevel = 0;
void printlevel(node*root, int level){
    if(root==NULL){
        return ;
    }
    if(maxlevel<level){
        cout<<root->data<<" ";
        maxlevel = level;
    }
    printlevel(root->left,level+1);
    printlevel(root->right,level+1);
}
void printLeftView(node*root){
    printlevel(root,1);
}
int main(){

    return 0;
}