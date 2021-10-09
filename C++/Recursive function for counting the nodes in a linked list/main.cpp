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

/*int countNodes(Node *temp,int count)
{
    if(temp!=NULL)
    {
        count = countNodes(temp->next,++count);
    }
    
    return count;
}*/

int countNodes(Node *temp)
{
    if(temp==NULL)
        return 0;
    
    else
        return 1 + countNodes(temp->next);

}

int main()
{
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    
    createLinkedlist(n);
    
    //cout<<"No. of nodes = "<<countNodes(head,0)<<endl;
    
    cout<<"No. of nodes = "<<countNodes(head)<<endl;

    return 0;
    
}



