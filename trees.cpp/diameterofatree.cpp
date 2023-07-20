//it is the longest path btw two end noeds of a tree 
//dimater left side se bi nikal skta,right side se bhi and max height (from both )+1 se bhi toh we have three options
// class Solution {
//   public:
 
//     int height(Node* root)
//     {
//         if(root==NULL)
//         {
//             return 0;
//         }
//         int left=height(root->left);
//         int right=height(root->right);
//         return max(left,right)+1;
        
//     }
//     int diameter(Node* root) {
//           if(root==NULL)
//           {
//               return 0;
//           }
//           int opt1=diameter(root->left);
//           int opt2=diameter(root->right);
//           int opt3=height(root->left)+height(root->right)+1;
//           return max(opt1,max(opt2,opt3));
//     }
// };
//this approach is good but takes o(n2) times as it will have two recursion first for heigt and then for dimater 
//to optimized this approaach wwe will use pair<int,int> ,see this approach later on 
