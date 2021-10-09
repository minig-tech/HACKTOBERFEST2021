//
//  main.cpp
//  Counting nodes in a linked list

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*head=NULL,*tail=NULL;

void createLinkedlist(int n)
{
    Node *temp=NULL;
    int x;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        
        temp = new Node;
        
        if(head==NULL)
        {
            head = temp;
        }
        else
        {
            tail->next = temp;
        }
        temp->data = x;
        temp->next = NULL;
        tail = temp;
        
    }
}

int countNodes()
{
    Node *temp = head;
    int count=0;
    
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
    return count;
}


int main()
{
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createLinkedlist(n);
    
    cout<<"No. of nodes = "<<countNodes()<<endl;

    return 0;
    
}

