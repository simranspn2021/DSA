//codestudio approach 1
// int getlength(Node* head)
// {
//     int cnt=0;
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cnt++;
//         temp=temp->next;
//     }
//     return cnt;
// }
// Node *findMiddle(Node *head) {
//     // Write your code here
//     int length=getlength(head);
//     int middle=0;
//    if(length%2==0)
//    {
//     middle=(length/2)+1;

//    }
//    else{
//        middle=(length+1)/2;
//    }
//    int i=1;
//    Node* temp=head;
//    while(i<middle)
//    {
//        temp=temp->next;
//        i++;
//    }
//    return temp;
// }
//another approach of two pointer slow and fast 


// Node *findMiddle(Node *head) {
//     // Write your code here
//     if(head==NULL || head->next==NULL)
//     {
//         return head;
//     }
//     if(head->next->next==NULL)
//     {
//         return head->next;
//     }
    
//     Node* slow=head;
//     Node* fast=head->next;
//     while(fast!=NULL )
//     {
//         fast=fast->next;
//         if(fast!=NULL)
//         {
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }