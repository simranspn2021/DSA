#include<iostream>
using namespace std;
class Node 
{
  public:
  int data;
  Node* prev;
  Node* next;
  Node(int data)
  {
      this->data=data;
      this->prev=NULL;
       this->next=NULL;
  }
  ~Node()
  {
     if(next!=NULL)
     {
        delete  next;
        next=NULL;
     }
  }
};
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertathead(Node* &head,Node* tail,int data  )
{
    if(head== NULL)
    {
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    }
}
void insertattail(Node* &head,Node* &tail,int data)
{  if(tail== NULL)
    {
        Node* newnode=new Node(data);
        head=newnode;
        tail=newnode;
    }
    else{
  Node* temp=tail;
  Node * newnode=new Node(data);
  temp->next=newnode;
  newnode->prev=temp;
  tail=newnode;
    }
  
}
void deleteatposition(Node* &head,int position)
{
 if(position==1)
 {
    Node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
 }
 else 
 {
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<position)
    {
      prev=curr;
      curr=curr->next;
      cnt++;

    }
    curr->prev=NULL;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
     }
}
int getlength(Node* &head)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
void insertatposition(Node* head,Node* tail,int position,int data)
{
    if(position==1)
    {
        insertathead(head,tail,data);
        return;
    }
    Node * temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(head,tail,data);
        return ;
    }
    Node* newnode=new Node(data);
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    newnode->prev=temp;

}
int main()
{
    Node* n1=new Node(23);
    Node *head=n1;
    Node *tail=n1;
     print(head);
     int count=getlength(head);
     cout<<"length of the linked list is "<<count;
    insertathead(head,tail,12);
    insertathead(head,tail,11);
    print(head);
    insertattail(head,tail,89);
    print(head);
    insertattail(head,tail,90);
    print(head);
    cout<<"after inserting at 3 psoition"<<endl;
    insertatposition(head,tail,3,190);
    print(head);
    deleteatposition(head,1);
    print(head);
        return 0;
}