//why we need linked list??
//bcoause of dynamic allocation of memory
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
//destructor 
~Node()
{
    if(this->next!=NULL)
    {
        delete next;
        this->next=NULL;
    }
}
};
void insertathead(Node* &head,int data)
{
   Node* temp=new Node(data);
   temp->next=head;
   head=temp;
}
void insertattail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;

}
void insertatposition(Node* &tail,Node* &head,int n,int data)
{
    if(n==1)
    {
        insertathead(head,data);
    }
    Node * temp=head;
    int cnt=1;
    while(cnt<n-1)
    {
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertattail(tail,data);
    }
    Node* nodeinsert=new Node(data);
    nodeinsert->next=temp->next;
    temp->next=nodeinsert;
}
void deleteatposition(Node* &head,int position)
{
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
              delete temp;
    }
    else {
        int cnt=1;
        Node* prev=NULL;
        Node*curr=head;
        while(cnt<position)
        {
          prev=curr;
          curr=curr->next;
          cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete  curr;
    }
}

void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    Node* n1=new Node(55);
    Node* head=n1;
    Node* tail=n1;
    insertathead(head,23);
    insertathead(head,89);
    print(head);
    insertattail(tail,22);
    print(head);
    cout<<"after inserting in middle the linked list is "<<endl;
    insertatposition(tail,head,3,90);
    print(head);
    deleteatposition(head,2);
    print(head);
    return 0;
}