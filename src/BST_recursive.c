#include <stdio.h>
#include <malloc.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

int max(int a, int b)
{
	int ret = 0;
	if(a>b)
		ret = a;
	else
		ret = b;
	return ret;
}

int findHeight(struct node* root)
{
	if(root == 0)
		return -1;
	else{
		int leftHeight = findHeight(root->left);
		int rightHeight = findHeight(root->right);
		int r = 1+max(leftHeight, rightHeight);
		return r;
	}
}
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

void preorder_traverse(struct node* p)
{
	if(p == NULL)
		return;
	printf("%d\n", p->data);
	preorder_traverse(p->left);
	preorder_traverse(p->right);
}

void postorder_traverse(struct node* p)
{
	if(p == NULL)
		return;
	postorder_traverse(p->left);
	postorder_traverse(p->right);
	printf("%d\n", p->data);
}

int min_element(struct node* root)
{
	if(root->left == NULL && root->right == NULL)
		return root->data;
	else
		min_element(root->left);
}

int max_element(struct node* root)
{
	if(root->left == NULL && root->right == NULL)
		return root->data;
	else
		max_element(root->right);
}
int main()
{
	struct node* root = NULL;
	root = insert(root, 15);
	root = insert(root, 10);
	root = insert(root, 20);
	root = insert(root, 25);
	root = insert(root, 30);
	root = insert(root, 2);

	inorder_traverse(root);
	printf("\nMinimum element in the tree is : %d\n", min_element(root));
	printf("\nMaximum element in the tree is : %d\n", max_element(root));
	printf("Height of the Binary tree is : %d\n", findHeight(root));
	return 0;
}
