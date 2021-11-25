#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node*left;
  Node*right;
  Node(int d){
    data=d;
    left=NULL;
    right=NULL;
  }
};

Node* Insert(Node *root,int value){
if (!root)
 {
    return new Node(value);
 }
if (value > root->data)
 {
    root->right = Insert(root->right, value);
 }
else
 {
    root->left = Insert(root->left, value);
 }
return root;
}

int countLeaves(Node* root)
{
  if(root==NULL)
  return 0;
  
  if(root->right==NULL && root->left==NULL)
  return 1;
  
  return countLeaves(root->left)+countLeaves(root->right);
}

/*
void print(Node*root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  print(root->left);
  print(root->right);
}
*/
int main()
{
    	Node b, *root = NULL;
	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);
  cout<<countLeaves(root);
	return 0;
}
