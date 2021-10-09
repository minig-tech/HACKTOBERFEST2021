//
//  main.cpp
//  Finding maximum element in a linked list

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

long int maxElement()
{
    Node *temp = head;
    long int max = INT64_MIN;
    
    while(temp!=NULL)
    {
        if(temp->data>max)
            max = temp->data;
        
        temp = temp->next;
    }
    return max;
}


int main() {
   
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createNode(n);
    
    printNode();
    cout<<endl;
    
    cout<<"Maximum element is: "<<maxElement()<<endl;
    
    return 0;
}
 
