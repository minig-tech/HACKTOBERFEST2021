//
//  main.cpp
//  Inserting element at given position

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

void insert(int n,int x)
{
    Node *q=head,*p=head->next,*temp = new Node;
    
    for(int i=2;i<n;i++)
    {
        q=q->next;
        p=p->next;
    }
    
    temp->data = x;
    temp->next = p;
    q->next = temp;
    
}

int main() {
   
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createNode(n);
    
    printNode();
    cout<<endl;
    
    int x;
    
    cout<<"Enter the position at which you want to insert the element: ";
    
    cin>>n;
    
    cout<<"Enter the element you want to insert: ";
    
    cin>>x;
    
    insert(n,x);
    
    cout<<"New linked list = ";
    
    printNode();
    cout<<endl;
    return 0;
}
 

