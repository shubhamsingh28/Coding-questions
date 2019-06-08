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
int calHeight(Node* root,int height){
	if(root==NULL){
		return height;
	}
	return max(calHeight(root->left,height+1),calHeight(root->right,height+1));
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
	height=calHeight(root,0);
	cout<<height<<endl;
	return 0;
}
