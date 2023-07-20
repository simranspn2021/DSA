//there is one error in thsi solvethat otherwise one testcase is giving wrong ans 
// Node<int>* solve(Node<int>* &first,Node<int>* &second)
// {
//     Node<int>* curr1=first;
//     Node<int>* curr2=second;
//     Node<int>* next1=first->next;
//     while(next1!=NULL and curr2!=NULL)
//     {
//         if((curr2->data>=curr1->data) and (curr2->data<=next1->data))
//         {
//             Node<int>* temp=curr2;
//             curr2=curr2->next;
//             curr1->next=temp;
//             temp->next=next1;
//             curr1=curr1->next;

//         }
//         else
//         {
//             curr1=curr1->next;
//             next1=next1->next;
//  if(next1==NULL)
//  {
//      curr1->next=curr2;
//      return first;
//  }
//         }
//     }
//     return first;
// }
// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     // Write your code here.
//     if(first==NULL)
//     {
//         return second;
//     }
//     if(second==NULL)
//     {
//         return first;
//     }
//     if(first->data<=second->data)
//     {
//         return solve(first,second);
//     }
//     else
//     {
//         return solve(second,first);

//     }

// }
