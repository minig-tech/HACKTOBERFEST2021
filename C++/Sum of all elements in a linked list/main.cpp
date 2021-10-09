//
//  main.cpp
//  Recursive function for counting the nodes

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

int add()
{
    Node *temp = head;
    int total = 0;
    
    while(temp!=NULL)
    {
        total = total + temp->data;
        temp = temp->next;
    }
    
    return total;
}

int main()
{
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createLinkedlist(n);
    
    cout<<"Sum of all elements: "<<add()<<endl;
    
    return 0;
    
}




