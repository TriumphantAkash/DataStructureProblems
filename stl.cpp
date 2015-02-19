/*This program demonstrate the use of basic stl library functions and make use of these functions to solving the ptoblems in O(n)*/
using namespace std;
//#include <malloc.h>
#include <iostream>
#include <queue>
class Node{
public:
	int data;
	class Node* left;
	class Node* right;
};

class Node* getNewNode(int data)
{
	//class Node* newNode = (class Node*)malloc(sizeof(class Node));
	class Node* newNode = new Node();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
class Node* insert(class Node* root, int n)
{
	if(root == NULL){//empty tree
		root = getNewNode(n);
	}else{
		if(n <= root->data)
			root->left = insert(root->left, n);//root of leftsubtree is updated
		else
			root->right = insert(root->right, n);//root of rightsubtree is updated
	}
	return root;
}
void level_order(class Node* root)
{
	if(root == NULL)
		cout<<"empty tree!"<<endl;
	else{
		class Node* p;
		queue<Node*> Q;
		Q.push(root);
		while(!Q.empty()){
			p = Q.front();//just returns the element, does not remove it
			cout<<p->data<<endl;
			if(p->left != NULL)
				Q.push(p->left);
			if(p->right != NULL)
				Q.push(p->right);
			Q.pop();	//removes the element from front
		}
	}
}
int main()
{
	class Node* root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 25);
	root = insert(root, 30);
	root = insert(root, 2);


	cout<<"This is a print statement"<<endl;
	level_order(root);
	return 0;
}
