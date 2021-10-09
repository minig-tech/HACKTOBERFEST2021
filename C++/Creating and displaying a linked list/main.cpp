//
//  main.cpp
//  Creating and displaying a linked list
//

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

void printNode(Node *temp1)
{
    temp1 = head;
    
    while(temp1!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->next;
    }
}

 
int main() {
   
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createNode(n);
    
    printNode(head);
    cout<<endl;
    
    return 0;
}


