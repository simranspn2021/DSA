#include<iostream>
using namespace std;
class Node 
{
public:
int data;
Node* next;
Node(int data)
{
    this->data=data;
    this->next=NULL;
}
~Node()
{
    if(this->next!=NULL)
    {
        delete next;
        next=NULL;
        
    }
}
//in circular we use only tail ponter not a need of head pointer 

};
void insertNode(Node* &tail,int element,int data )
{
     if(tail==NULL)
     {
        Node* newnode=new Node(data);
        tail=newnode;
        newnode->next=newnode;
     }
     else{
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
     }

}
void print(Node* tail)
{
    // Node* temp=tail;
    // cout<<tail->data;
    // while(tail->next!=temp)
    // {
    //     cout<<tail->data;
    //     tail=tail->next;
    // }
}
int main()
{
    Node* tail=NULL;
    insertNode(tail,5,3);
    insertNode(tail,3,7);
    print(tail);
    return 0;
}