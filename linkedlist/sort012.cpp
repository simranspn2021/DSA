// Node* sortList(Node *head){
//     // Write your code here.
//     int zerocnt=0;
//     int onecnt=0;
//     int twocnt=0;
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         if(temp->data==0)
//            zerocnt++;
//         if(temp->data==1)
//            onecnt++;
//         if(temp->data==2)
//            twocnt++;
           
//         temp=temp->next;
//     }
//     temp=head;
//     while (temp!=NULL and zerocnt--) {
//       temp->data = 0;
//       temp=temp->next;
//     }
//     while (temp!=NULL and onecnt--)
//     {
//         temp->data=1;
//         temp=temp->next;
//     }
//     while(temp!=NULL and twocnt--)
//     {
//         temp->data=2;
//         temp=temp->next;
//     }
//     return head;
// }
//code wihtoout replacement of data 
// void insert(Node* &tail,Node* curr)
// {
//     tail->next=curr;
//     tail=curr;
// }

// Node* sortList(Node *head){
//     // Write your code here.
//     Node* zerohead=new Node(-1);
//     Node* zerotail=zerohead;
//     Node* onehead=new Node(-1);
//     Node* onetail=onehead;
//     Node* twohead=new Node(-1);
//     Node* twotail=twohead;
//      Node* curr=head;
//      while(curr!=NULL)
//      {
//          int value=curr->data;
//          if (value == 0) {
//            insert(zerotail, curr);
//          } else if (value == 1)
//          {
//              insert(onetail,curr);
//          }
//          else if( value==2)
//          {
//              insert(twotail,curr);
//          }
//          curr=curr->next;
     
//      }
//      //merging three lists
//      if(onehead->next!=NULL)
//      {
//          zerotail->next=onehead->next;
//      }
//      else{
//          zerotail->next=twohead->next;
//      }
//      onetail->next=twohead->next;
//      twotail->next=NULL;
//      head=zerohead->next;
//      delete zerohead;
//      delete onehead;
//      delete twohead;
     
//      return head;
    
//      }
