//
//  main.cpp
//  Inserting before first node

#include <iostream>
using namespace std;

struct Node{
    
    int data;
    Node *next;
}*tail=NULL,*head=NULL;

void createNode(int n)
{
    int x;
    cout<<"Enter "<<n<<" elements: ";
    
    Node *temp=NULL;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        
        temp=new Node;
        if( head == NULL)
        {
            head = temp;
        }
        else
        {
            tail->next=temp;
        }
        temp->data = x;
        temp->next = NULL;
        tail=temp;
        
    }

}

void printNode()
{
    Node *temp = head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insert(int x)
{
    Node *temp = new Node;
    temp->data = x;
    
    temp->next = head;
    head = temp;
}

int main() {
   
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createNode(n);
    
    printNode();
    cout<<endl;
    
    int x;
    
    cout<<"Enter the element you want to insert at the beginning of the linked list: ";
    cin>>x;
    
    insert(x);
    
    cout<<"New linked list = ";
    
    printNode();
    cout<<endl;
    return 0;
}
 

