#include <stdio.h>
#include <stdlib.h>


struct Node
{
	int data;   			
	struct Node* next;  	
};


void push(struct Node **top, int x) 
{
	
	struct Node* node = NULL;
	node = (struct Node*)malloc(sizeof(struct Node));

	
	if (!node)
	{
		printf("\nHeap Overflow");
		exit(1);
	}

	printf("Inserting %d\n", x);

	
	node->data = x;


	node->next = *top;

	
	*top = node;
}


int isEmpty(struct Node* top)
{
	return top == NULL;
}


int peek(struct Node *top)
{
	
	if (!isEmpty(top))
		return top->data;
	else
		exit(EXIT_FAILURE);
}


void pop(struct Node** top) 
{
	struct Node *node;

	
	if (*top == NULL)
	{
		printf("\nStack Underflow");
		exit(1);
	}

	printf("Removing %d\n", peek(*top));

	node = *top;

	
	*top = (*top)->next;

	
	free(node);
}


int main(void)
{
	struct Node *top = NULL;

	push(&top, 1);
	push(&top, 2);
	push(&top, 3);

	printf("Top element is %d\n", peek(top));

	pop(&top);
	pop(&top);
	pop(&top);

	if (isEmpty(top))
		printf("Stack is empty");
	else
		printf("Stack is not empty");

	return 0;
}