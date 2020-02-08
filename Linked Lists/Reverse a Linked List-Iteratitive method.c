#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node *next;
};
 
 
struct Node* reverse(struct Node* head)
{
    struct Node *current,*prev, *next;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
 
struct Node* insert(struct Node* head, int value)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = value;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }
    else {
        struct Node* temp1 = head;
        while(temp1->next != NULL) temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}
 
void Print(struct Node* head)
{
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
 
int main()
{
    struct Node *head = NULL;
    head = insert(head,3);
    head = insert(head,5);
    head = insert(head,7);
    head = insert(head,10);
    Print(head);
    head = reverse(head);
    Print(head);
 
 
    return 0;
}