// //here we will take 2 vector and store the inorder both are sorted now we will merge them together in sorted way and make a bst using inorder 
// void inorder(TreeNode<int> *root,vector<int> &ans)
// {
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder(root->left,ans);
//     ans.push_back(root->data);
//     inorder(root->right,ans);

// }
// vector<int> mergetwosorted(vector<int> bst1,vector<int> bst2)
// {
//     int m=bst1.size();
//     int n=bst2.size();
//     vector<int>newvec(m+n);
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<m and j<n)
//     {
//         if(bst1[i]<bst2[j])
//         {
//             newvec[k++]=bst1[i];
//             i++;
//         }
//         else
//         {
//             newvec[k++]=bst2[j];
//             j++;
//         }
//     }
//     while(i<m)
//     {
//         newvec[k++]=bst1[i++];
//     }
//     while(j<n)
//     {
//         newvec[k++]=bst2[j++];
//     }
//     return newvec;
// }
// TreeNode<int>* inordertobst(vector<int> arr,int s,int e)
// {
//     if(s>e)
//     {
//         return NULL;
//     }
//     int mid=(s+e)/2;
//     TreeNode<int>* root=new TreeNode<int>(arr[mid]);
//     root->left=inordertobst(arr,s,mid-1);
//     root->right=inordertobst(arr,mid+1,e);
//     return root;
// }
// TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){

//     vector<int>bst1,bst2;
//     inorder(root1,bst1);
//     inorder(root2,bst2);
//     vector<int>mergearray=mergetwosorted(bst1,bst2);
//     int s=0;
//     int e=mergearray.size()-1;
//     TreeNode<int> *root=inordertobst(mergearray,s,e);
//     return root;