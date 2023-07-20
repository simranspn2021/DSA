// Node * removeDuplicates(Node *head)
// {
//     // Write your code here
//     if(head==NULL)
//     {
//         return head;
//     }
//     Node* curr=head;
//     while(curr!=NULL)
//     {
//         if((curr->next!=NULL) and (curr->next->data==curr->data))
//         {
//             Node* currnext=curr->next;
//             curr->next=curr->next->next;
//             delete currnext;
//         }
//         else{
//             curr=curr->next;
//         }
//     }
//     return head;
// }
