#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};
// TC theta (n) constant work
// SP Theta of max width
queue<Node*> q;
int maxWidth(Node*root){
    if(root==NULL){return 0;}
    q.push(root);
    int res = 0;
    while(q.empty()==false){
        int count = q.size();
        res = max(res,count);
        for(int i=0; i<count; i++){
            Node*curr = q.front();
            q.pop();
            if(curr->left!=NULL){
                q.push(curr->left);
            }if(curr->right!=NULL){
                q.push(curr->right);
            }
        }
    }
    return res;

}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	root->right->right=new Node(70);
    root->left->left->left = new Node(80);
    root->left->left->right = new Node(90);
    root->left->right->left = new Node(1001);
    root->left->right->right = new Node(110);
    root->right->right->right = new Node(120);
    root->right->right->left = new Node(130);
    root->right->left->left = new Node(140);
    root->right->left->right = new Node(150);
	
	cout<<maxWidth(root);
}