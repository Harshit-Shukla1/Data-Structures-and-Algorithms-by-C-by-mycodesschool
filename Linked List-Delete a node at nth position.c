#include <stdio.h>
#include <stdlib.h>
 
struct Node{
    int data;
    struct Node* next;
};
 
struct Node* head;
 
void Insert(int data); // insert and integer at the end of list
void Print(); // print all elements in the list
void Delete(int n); // Delete node at position n
 
int main()
{
    head = NULL; // List is first empty
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); // List 2 4 6 5
    printf("List is: ");
    Print();
    printf("\n");
    int n;
    printf("Enter a position:");
    scanf("%d", &n);
    Delete(n);
    Print();
 
    return 0;
}
 
void Delete(int n)
{
    int i;
    struct Node* temp1 = head;
    if(n == 1){
        head = temp1->next; // head points to second Node
        free(temp1);
        return;
    }
    for(i=0;i<n-2;i++)
    {
        temp1 = temp1->next;
    }
    // temp1 points to (n-1)th Node
    struct Node* temp2 = temp1->next; //nth node
    temp1->next = temp2->next; //(n+1)th node
    free(temp2);
}
 
void Insert(int n)
{
    int i;
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = n;
    if(head == NULL)
    {
        temp->next = head;
        head = temp;
        return;
    }
    temp->next = NULL;
    struct Node* temp2 = head;
    while(1)
    {
        if(temp2->next == NULL)
        {
            temp2->next = temp;
            break;
        }
        temp2=temp2->next;
    }
 
 
}
 
void Print()
{
    struct Node* tempobet = head;
    while(tempobet != NULL)
    {
        printf("%d ", tempobet->data);
        tempobet=tempobet->next;
    }
}

