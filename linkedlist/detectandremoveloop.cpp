// //approach 1 for detecting whether loop is present or not 
//here time and space both is O(n) complexity 
// bool detectloop(Node* head)
// {
//     if(head==NULL)
//     {
//         return false;
//     }
//     map<Node*,bool>visited;
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         if(visited[temp]=true)
//         {
//             return 1;
//         }
//         visited[temp]=true;
//         temp=temp->next;
//     }
//     return 0;
// }
//approach 2
//here we will use floyd cycle detection algorithm 
//lern about this algorithm and the distance btw the slow and fast become less with time due to which they will definitly meet each other 

// bool floydalgo(Node* head)
// {
//     if(head==NULL)
//     {
//         return false;
//     }
//     Node* slow=head;
//     Node* fast=head;
//     while(slow!=NULL and fast!=NULL)
//     {
//         fast=fast->next;
//         if(fast!=NULL)
//         {
//             fast=fast->next;
//         }
//         slow=slow->next;
//         if(slow==fast)
//         {
//             return true;
//         }

//     }
//     return false;}
//Now we will learn about detection of beginning node of loop of linked list
// Node* begnode(Node *head) 
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     Node *intersection=floydalgo(head);
//     Node* slow=head;
//     while(slow!=intersection)
//     {
//         slow=slow->next;
//         intersection=intersection->next;

//     }
//     return slow;
// }
//Now we will see about removing the loop from the linked list 
// void removeloop(Node * &head)
// {
//     if(head==NULL)
//     {return;
//     }
//     Node* startingloop=begnode(head);
//     Node* temp=startingloop;
//     while(temp->next!=startingloop)
//     {
//         temp=temp->next;


//     }
//     temp->next=NULL;
// }
