
// Node *removeDuplicates(Node *head)
// {
//     // Write your code here
//     if(head==NULL)
//     {
//         return head;
//     }
//     Node* curr=head;
//     while(curr!=NULL)
//     {
//         Node* temp=curr;
//         while(temp->next!=NULL)
//         {
//             if(curr->data==temp->next->data)
//             {
//                 Node* currnode=temp->next->next;
//                 Node* nodetodelete=temp->next;
//                 delete nodetodelete;
//                 temp->next=currnode;
                
//             }
//             else{
// temp=temp->next;
//             }
            
//         }
//         curr=curr->next;
//     }
//     return head;

// }
//annother approach using map for btter optimizatiton but here wew wiell use map 
// Node * removeDuplicates( Node *head) 
//     {
//      // your code goes here
//      if(head==NULL){
//          return head;
//      }
//      unordered_map<int , int>mp;
//     Node* curr=head;
//     Node* prev=NULL;
//     while(curr!=NULL){
//          mp[curr->data]++;
//          if(mp[curr->data] > 1){  // repeated node
//              Node* temp= curr;
//              prev->next= curr->next;
//              curr=curr->next;
//              delete temp;
//          }else{
//              prev=curr; // prev always behind curr
//              curr=curr->next;
//          }
//     }
//      return head;
//     }