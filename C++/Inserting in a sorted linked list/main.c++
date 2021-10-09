//
//  main.c
//  Inserting in a sorted list

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*head=NULL,*tail=NULL;

void createNode(int n)
{
    int x;
    cout<<"Enter "<<n<<" elements in a sorted order (ascending order): ";
    
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
    Node *q=NULL,*p=head;
    
    temp->data = x;
    temp->next = NULL;
    
    while(p!=NULL)
    {
        if(p->data >= x)
        {
            break;
        }
        
        else
        {
            p=p->next;
            
            if(q==NULL)
            {
                q=head;
            }
            else
            {
                q=q->next;
            }
        }
    }
    
    if(q==NULL)
    {
        temp->next = head;
        head = temp ;
    }
    
    else if(p==NULL)
    {
        q->next = temp;
    }
    
    else
    {
        temp->next = q->next;
        q->next = temp;
    }
    
}

int main() {
   
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createNode(n);
    
    printNode();
    cout<<endl;
    
    int x;
    
    cout<<"Enter the element you want to insert in the linked list: ";
    cin>>x;
    
    insert(x);
    
    cout<<"New linked list = ";
    
    printNode();
    cout<<endl;
    return 0;
}
 

