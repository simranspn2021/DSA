//one solution is to get an array and store the elemnts of the linkedlist in the array and then apply the same logic as of array 
//but in tis space and time both is O(n)
// #include<vector>
// class Solution{
//     private:
//     bool check(vector<int>arr)
//     {
//         int si=arr.size();
//         int s=0;
//         int e=si-1;
//         while(s<e)
//         {
//             if(arr[s]!=arr[e])
//             {
//                 return false;
//             }
//             s++;
//             e--;
//         }
//         return true;
        
//     }
//   public:
//     //Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         //Your code here
//         Node* temp=head;
//         vector<int>arr;
//         while(temp!=NULL)
//         {
//             arr.push_back(temp->data);
//             temp=temp->next;
//         }
//         return check(arr);
//     }
// };
//2 appraoch to find palindrome without using space 

// class Solution{
//     private:
//     Node* getmid(Node* head)
//     {
//         Node* slow=head;
//         Node* fast=head->next;
//         while(fast!=NULL and fast->next!=NULL)
//         {
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         return slow;
//     }
//     public:
//     Node* reverse(Node* head)
//     {
//         Node* curr=head;
//         Node* prev=NULL;
//         Node* forward=NULL;
//         while(curr!=NULL)
//         {
//             forward=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=forward;
            
            
//         }
//         return prev;
//     }
//   public:
//     //Function to check whether the list is palindrome.
//     bool isPalindrome(Node *head)
//     {
//         //Your code here
//         if( head->next==NULL)
//         {
//             return true;
//         }
//         //find mid
//         Node* middle=getmid(head);
//         //reverse list after mid 
//         Node* temp=middle->next;
//         middle->next=reverse(temp);
//         Node* head1=head;
//         Node* head2=middle->next;
//         while(head2!=NULL)
//         {
//             if(head1->data!=head2->data)
//             {
//                 return false;
//             }
//             head1=head1->next;
//             head2=head2->next;
//         }
//          temp=middle->next;
//         middle->next=reverse(temp);
//         return true;
//     }
// };
