#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* left, *right;
	Node(int data){
		this->data = data;
		left=NULL;
		right=NULL;
	}	
};
void printPreorder(Node* root){
	if(root==NULL){
		return ;
	}
	cout<<root->data<<endl;
	printPreorder(root->left);
	printPreorder(root->right);
	return ;
}
void printPostorder(Node* root){
	if(root==NULL){
		return ;
	}
	printPostorder(root->left);
	printPostorder(root->right);
	cout<<root->data<<endl;
	return ;
}
void printInorder(Node* root){
	if(root==NULL){
		return ;
	}
	printInorder(root->left);
	cout<<root->data<<endl;
	printInorder(root->right);
	return ;
}
int main(){
	
	struct Node *root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left= new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right= new Node(7);
	
	cout<<"Preorder "<<endl;
	printPreorder(root);
	cout<<"Inoder "<<endl;
	printInorder(root);
	cout<<"Postorder "<<endl;
	printPostorder(root);
	return 0;
}
