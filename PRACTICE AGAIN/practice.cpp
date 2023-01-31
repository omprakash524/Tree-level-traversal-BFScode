#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    Node*left,*right;
    Node(int d){
        key=d;
        left=right=NULL;
    }
};
void Printlevel(Node*root){
    if(root==NULL){
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(q.empty()==false){
        Node*curr = q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

void printl(Node*root){
    if(root==NULL){return;}
    queue<Node*>q1;
    q1.push(root);
    q1.push(NULL);
    while(q1.size()>1){
        Node*curr = q1.front();
        q1.pop();
        if(curr==NULL){
            cout<<endl;
            q1.push(NULL);
            continue;
        }
        cout<<(curr->key)<<" ";
        if(curr->right!=NULL){
            q1.push(curr->right);
        }
        if(curr->left!=NULL){
            q1.push(curr->right);
        }
    }
}
int main(){
    Node*root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    Printlevel(root);cout<<endl;
    printl(root);


}