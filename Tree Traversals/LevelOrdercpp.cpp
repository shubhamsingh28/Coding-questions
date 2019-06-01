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
//non recursive
void printLevelorder(Node* root){
	queue<Node*>q;
	q.push(root);
	while(!q.empty()){
		Node* t=q.front();
		cout<<t->data<<endl;
		q.push(t->left);
		q.push(t->right);
		q.pop();
	}
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
	
	cout<<"Level order "<<endl;
	printLevelorder(root);
	return 0;
}
