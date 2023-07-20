// /****************************************************************
//codestudio sotution using loops 

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//             int data;
//             Node *next;
//             Node()
//             {
//                 this->data = 0;
//                 next = NULL;
//             }
//             Node(int data)
//             {
//                 this->data = data;
//                 this->next = NULL;
//             }
//             Node(int data, Node* next)
//             {
//                 this->data = data;
//                 this->next = next;
//             }
//         };
        

// *****************************************************************/

// Node* reverseLinkedList(Node *head)
// {
//     // Write your code here
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forward;
//     while(curr!=NULL)
//     {
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }
// /****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//             int data;
//             Node *next;
//             Node()
//             {
//                 this->data = 0;
//                 next = NULL;
//             }
//             Node(int data)
//             {
//                 this->data = data;
//                 this->next = NULL;
//             }
//             Node(int data, Node* next)
//             {
//                 this->data = data;
//                 this->next = next;
//             }
//         };
        

// *****************************************************************/

// Node* reverseLinkedList(Node *head)
// {
//     // Write your code here
//     Node* prev=NULL;
//     Node* curr=head;
//     Node* forward;
//     while(curr!=NULL)
//     {
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }
//Another approach for revsering the linked list 
/****************************************************************

//     Following is the class structure of the Node class:

//         class Node
//         {
//         public:
//             int data;
//             Node *next;
//             Node()
//             {
//                 this->data = 0;
//                 next = NULL;
//             }
//             Node(int data)
//             {
//                 this->data = data;
//                 this->next = NULL;
//             }
//             Node(int data, Node* next)
//             {
//                 this->data = data;
//                 this->next = next;
//             }
//         };
        

// *****************************************************************/
// void reverse(Node* &head,Node* prev,Node* curr)
// {
//     //base case
//     if (curr == NULL) {
//     head=prev;
//     return;
//     }
//     Node* forward;
//     forward=curr->next;
//     reverse(head,curr,forward);
//     curr->next=prev;
// }
// Node *reverseLinkedList(Node *head) {
//   // Write your code here
//   Node *prev = NULL;
//   Node *curr = head;
//   reverse(head,prev,curr);
//   return head;
// }
//another approach for recursion 
// Node *reverseLinkedList(Node *head) {
//   // Write your code here
//   if(head==NULL || head->next==NULL)
//   {
//       return head;

//   }
//   Node* chotahead=reverseLinkedList(head->next);
//   head->next->next=head;
//   head->next=NULL;
//   return chotahead;

// }