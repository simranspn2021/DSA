//first approach is we know inorder of the bst is in sorted order so we can check whether it is sorted or not here space will be taken for vector or array and then check for sorted or not 
//2 approach is using limits 
// bool checkBST(BinaryTreeNode<int> *root,int min,int max)
// {
//     if(root==NULL)
//     {
//         return true;
//     }
//     if(root->data<=min and root->data>=max)
//     {
//         bool left=checkBST(root->left,min,root->data);
//         bool right=checkBST(root->right,root->data,max);
//         return left && right;
//     }
//     else
//     {
//     return false;
//     }
// }
// bool validateBST(BinaryTreeNode<int> *root) {
//     return checkBST(root,INT_MIN,INT_MAX);
// }