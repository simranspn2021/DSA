//in order to check whether it is balnaced or not we will use three conditions 
//1.left vala balaced hai ki nhi 
//2.right vala balanaced hai ki nhi 
//3.inki hiehgt ka diff <=1 hai ya nhi
// class Solution{
//     public:
//     int height(Node * root)
//     {
//         if(root==NULL)
//         {
//             return 0;
//         }
//         int left=height(root->left);
//         int right=height(root->right);
//         return max(left,right)+1;
//     }
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         //  Your Code here
//         if(root==NULL)
//         {
//             return true;
//         }
        
//         bool left=isBalanced(root->left);
//         bool right=isBalanced(root->right);
//         bool geight=abs(height(root->left)-height(root->right))<=1;
        
//         if(left && right && geight)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//     }

//     }
//     };
//but this technique will reuqire the time of O(n2) hence we will use the optimized approach 
