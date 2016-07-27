#include <stdio.h>
#include <malloc.h>
struct node {
	struct node *left;
	struct node *right;
	int data;
};

struct node *root = NULL, *temp_root = NULL;

int create_bst(struct node *temp_root, int val)
{
	struct node *temp;

	if (temp_root == NULL) {
		temp_root = (struct node *)malloc(sizeof(struct node));
		root = temp_root;
		root->data = val;
		return 0;
	}
	
	if (temp_root->data >= val) {
		if (temp_root->right != NULL) {
			create_bst(temp_root->right, val);
		} else {
			temp = (struct node *)malloc(sizeof(struct node));
			temp->data = val;
			temp->left = NULL;
			temp->right = NULL; 
			return 0;
		}
	} else {
		if (temp_root->left != NULL) {
			create_bst(temp_root->left, val);
		} else {
			temp = (struct node *)malloc(sizeof(struct node));
			temp->data = val;
			temp->left = NULL;
			temp->right = NULL; 
			return 0;
		}

	}
	return -1;
}

int in_order(struct node *temp_root)
{
	in_order(temp_root);
	printf("%d ", temp_root->data);
	in_order(temp_root);
	
	return 0;
}


int main()
{

	create_bst(root, 10);
	create_bst(root, 7);
	create_bst(root, 15);
	create_bst(root, 20);
	create_bst(root, 25);
	create_bst(root, 26);
	
	in_order(root);

}
