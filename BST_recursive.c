#include <stdio.h>
#include <malloc.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* getNewNode(int data)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

struct node* insert(struct node* root, int n)
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

void inorder_traverse(struct node* p)
{
	if(p == NULL)
		return;
	inorder_traverse(p->left);
	printf("%d\n", p->data);
	inorder_traverse(p->right);
}

void main()
{
	struct node* root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);

	inorder_traverse(root);
}
