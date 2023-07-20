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
};
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int getlength(Node* head)
{
    Node* temp=head;
    int cnt=1;
    while(temp->next!=head)
    {
         cnt++;
        temp=temp->next;
       
    }
    return cnt;
}
void spilt(Node* &head)
{
    int length=getlength(head);
    Node* temp=head;
    Node* prev=head;
    Node* curr=head->next;
    int cnt=0;
    if(length%2==0)
    {
        while(cnt<(length/2)-1)
        {
            prev=prev->next;
            curr=curr->next;
            cnt++;
   
        }
        prev->next=head;
        Node* head2=curr;
        while(curr->next!=temp)
        {
            curr=curr->next;
        }
        curr->next=NULL;
        cout<<head2->data;
    }
    else 
    {
        while(cnt<(length/2))
        {
            prev=prev->next;
            curr=curr->next;
            cnt++;
   
        }
        prev->next=head;
        Node* head2=curr;
        while(curr->next!=temp)
        {
            curr=curr->next;
        }
        curr->next=NULL;
        cout<<head2->data;
        
    }
}

int main()
{
     Node* n1=new Node(23);
     Node* head=n1;
     Node* n2=new Node(12);
     Node* n3=new Node(11);
     Node* n4=new Node(90);
    Node* n5=new Node(99);
     head->next=n2;
     n2->next=n3;
     n3->next=n4;
     n4->next=n5;
     n5->next=n1;
     //print(head);
 spilt(head);
    //  cout<<newhead->data;
    //cout<<getlength(head);

    return 0;
}

