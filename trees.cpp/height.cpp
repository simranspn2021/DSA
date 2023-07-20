// //height is the longest path btw the leaf node and root ndoe 
// class Solution{
//     int countnodes(struct Node* node)
//     {
//         if(node==NULL)
//         {
//             return 0;
//         }
        
//         return max(countnodes(node->left),countnodes(node->right))+1;
//     }
//     public:
//     //Function to find the height of a binary tree.
//     int height(struct Node* node){
//         // code here 
//         int h=countnodes(node);
//         return h;
//     }
// };
//time complexity(O(n))
//space complexity(O(height))//recursion 
//for skew treee O(n=h) 