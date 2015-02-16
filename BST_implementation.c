//CAUTION: There are bugs in these implementations, leads to segmentation fault
//This is the implementaion of Binary Search Tree basic operations
#include <stdio.h>
#include <malloc.h>

struct node{
	int val;
	struct node* left;
	struct node* right;
};

void insert(struct node** root_addr, int n)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->val = n;
	temp->left = NULL;
	temp->right = NULL;

	if(*root_addr == NULL){
		*root_addr = temp;
	}
	else{
		char flag = 'n';
		struct node* p = *root_addr;
		struct node* parent = NULL;
		while(p != NULL){		//run it untill it reaches leaf node
			parent = p;
			if(n <= p->val){
				p = p->left;
				flag = 'l';
			}else{
				p = p->right;
				flag = 'r';
			}
		}
		if(flag == 'l')
			parent->left = temp;
		else
			p->right = temp;
	}
}

void inorder_traverse(struct node* p)
{
	if(p == NULL)
		return;
	inorder_traverse(p->left);
	printf("%d\n", p->val);
	inorder_traverse(p->right);
}

int main()
{
	struct node* root = NULL;	
	insert(&root, 10);
	insert(&root, 2);
	insert(&root, 5);
	insert(&root, 7);
	insert(&root, 15);
/*	insert(&root, 12);
	insert(&root, 17);
*/
	inorder_traverse(root);
	return 0;
}
