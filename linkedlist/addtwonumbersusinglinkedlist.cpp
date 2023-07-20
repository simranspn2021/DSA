// class Solution
// {
//     void insertattail(Node* &anshead,Node* &anstail,int digit)
//     {
//         if(anshead==NULL )
//         {
//             Node* temp=new Node(digit);
//             anshead=temp;
//             anstail=temp;
//             return;
//         }
//         else
//         {
//          Node* temp=new Node(digit);
//          anstail->next=temp;
//          anstail=temp;

// }    }
//     Node* add(Node* first,Node* second)
//     {
//         Node* anshead=NULL;
//         Node* anstail=NULL;
//         int carry=0;
//         while(first!=NULL and second!=NULL)
//         {
//             int sum=carry+first->data+second->data;
//             int digit=sum%10;
//             insertattail(anshead,anstail,digit);
//             carry=sum/10;
//             first=first->next;
//             second=second->next;
//         }
//         while(first!=NULL)
//         {
//             int sum=carry+first->data;
//             int digit=sum%10;
//             insertattail(anshead,anstail,digit);
//             carry=sum/10;
//             first=first->next;
//         }
//           while(second!=NULL)
//         {
//             int sum=carry+second->data;
//             int digit=sum%10;
//             insertattail(anshead,anstail,digit);
//             carry=sum/10;
//             second=second->next;
//         }
//         while(carry!=0)
//         {
//             int sum=carry;
//             int digit=sum%10;
//             insertattail(anshead,anstail,digit);
//             carry=sum/10;
 
//         }
//         return anshead;
//     }
//     Node* reverse(Node* head)
//     {
//         Node* prev=NULL;
//         Node* curr=head;
//         Node* forward;
//         while(curr!=NULL)
//         {
//             forward=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forward;
            
//         }
//         return prev;
//     }
//     public:
//     //Function to add two numbers represented by linked list.
//     struct Node* addTwoLists(struct Node* first, struct Node* second)
//     {
//         // code here
//         first=reverse(first);
//         second=reverse(second);
//         Node* ans=add(first,second);
//         ans=reverse(ans);
//         return ans;
//     }
// };