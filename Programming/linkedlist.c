#include <stdio.h>
#include <malloc.h>

struct node {
	struct node *next;
	int data;
};

struct node *head = NULL;


int insert(int val)
{
	struct node *temp = NULL;

	if (head == NULL) {
		head = (struct node *)malloc(sizeof(struct node));
		head->data = val;
		return 0;
	} else {
		temp = (struct node *)malloc(sizeof(struct node));
		temp->next = head;
		head = temp;
		temp->data = val;
		return 0;
	}
	return -1;
}

int display(struct node *head)
{
	while (head->next != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("%d\n", head->data);
	return 0;
}


int main()
{
	insert(5);
	insert(10);
	insert(20);
	insert(25);

	display(head);

	return 0;
}
