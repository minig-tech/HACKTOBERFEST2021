//
//  main.cpp
//  Searching an element

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

Node* search(int x)
{
    Node *temp = head;
    
    while ( temp!= NULL )
    {
        if(temp->data == x )
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}


int main() {
   
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createNode(n);
    
    printNode();
    cout<<endl;
    
    int x;
    
    cout<<"Enter an element you want to search: ";
    cin>>x;
    
    cout<<"Address of given element = "<<search(x)<<endl;
    
    return 0;
}
 
