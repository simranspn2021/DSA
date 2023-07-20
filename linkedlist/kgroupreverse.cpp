// Node* kReverse(Node* head, int k) {
//     // Write your code here.
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     Node* forward= NULL;
//     Node* curr=head;
//     Node* prev=NULL;
//     int cnt=0;
//     while(curr!=NULL and cnt<k)
//     {
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//cnt++;

//     }
//     if(forward!=NULL)
//     {
//         head->next=kReverse(forward,  k);
//     }
//     return prev;
// }