/* height of a binary tree*/
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
int calHeightNonRecursive (Node* root){
	int height=0;
	map<Node*,int>m;
	m[root]=0;
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		Node* t=q.front();
		height=max(height,m[t]);
		if(t->left!=NULL){
			q.push(t->left);
			m[t->left]=m[t]+1;
		}
		if(t->left!=NULL){
			q.push(t->right);
			m[t->right]=m[t]+1;
		}
		cout<<m[t];
		q.pop();
	}
	return height;
}
int main(){
	struct Node *root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left= new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right= new Node(7);
	int height=0;
	height=calHeightNonRecursive(root);
	cout<<height<<endl;
//	Node* t=commonRoot(root,3,6);
//	cout<<t->data<<endl;
	return 0;
}
