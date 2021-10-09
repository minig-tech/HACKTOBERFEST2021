//
//  main.cpp
//  Recursive display of linked list

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



void recursivePrint(Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<" ";
        recursivePrint(p->next);
    }
}
 
int main() {
   
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createNode(n);
    
    recursivePrint(head);
    
    cout<<endl;
    
    return 0;
}



