//
//  main.c
//  Creating a doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
}*head=NULL,*tail=NULL;

void createNode(int x)
{
    struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
    
    if(head==NULL)
    {
        head = temp;
        temp->prev = NULL;
        
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
    }
    
    temp->data = x;
    temp->next = NULL;
    tail = temp;

}

void displayLinkedlist()
{
    struct Node *temp = head;
    
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n;
    
    printf("Enter number of integers you want to enter: ");
    scanf("%d",&n);
    
    printf("Enter %d integers: ",n); int x;
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        
        createNode(x);
    }
    
    displayLinkedlist();
    
    printf("\n");
    return 0;
}
