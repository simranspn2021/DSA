// //time complexity of insertion in bst is O(logn)
// #include<iostream>
// #include<queue>
// using namespace std;
// class Node 
// {
// public:
// int data;
// Node* left;
// Node* right;
// Node(int d)
// {
//   this->data=d;
//   this->left=NULL;
//   this->right=NULL;
// }

// };
// Node* insertatbst(Node* root,int data)
// {
//       if(root==NULL)
//     {
//          root=new Node(data);
//         return root;
//     }
//     if(data>root->data)
//     {
//         root->right=insertatbst(root->right,data);
//     }
//     else{
//         root->left=insertatbst(root->left,data);
//     }
//     return root;

// }
// void insertdata(Node* &root)
// {
//     int data;
//     cin>>data;
//     while(data!=-1)
//     {
//         root=insertatbst(root,data);
//         cin>>data;
//     }
// }
// int Find(Node* root)
// {
//     if (root==NULL)
//     {
//         return -1;
//     }
//     while(root->left!=NULL)
//     {
//         root=root->left;
//     }
//     return root->data;
// }
// Node* deletefromBST(Node* root,int value)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }
//     if(root->data==value)
//     {
//         //0 child
//          if(root->left==NULL and root->right==NULL)
//          {
//             delete root;
//             return NULL;
//          }
//         //1 child
//         //right is present and left is null
//          if(root->left==NULL and root->right!=NULL)
//          {
//             Node* temp=root->right;
//             delete root;
//             return temp;
//           }
//           if(root->left!=NULL and root->right==NULL)
//           {
//             Node* temp=root->left;
//             delete root;
//             return temp;
//           }
//         //2 child(here we will use inorder predesoor(left se larger ) or inorder successor(right se smaller)
//     if(root->left!=NULL and root->right!=NULL)
//     {
//          int minval=Find(root->right);
//          root->data=minval;
//        root->right=deletefromBST(root->right,minval);
//        return root;

//     }

//     }
//     else if(root->data>value)
//     {
//         root->left=deletefromBST(root->left,value);
//         return root;
//     }
//     else
//     {
//         root->right=deletefromBST(root->right,value);
//     return root;}
// }
// void levelordertraversal(Node* root)
// {
// queue<Node*>q;
// q.push(root);
// q.push(NULL);
// while(!q.empty())
// {
//     Node* temp=q.front();

//     q.pop();
//     if(temp==NULL)
//     {
//         cout<<endl;
//         if(!q.empty())
//         {
//             q.push(NULL);
//         }
//     }
//     else{
//         cout<<temp->data;
//     if(temp->left)
//     {
//         q.push(temp->left);
//     }
//     if(temp->right){
//       q.push(temp->right);
//     }
//     }

    
    
// }
// }
// int main()
// {
//     Node* root=NULL;
//     insertdata(root);
//     levelordertraversal(root);
//     cout<<"after deletion of 30 "<<endl;
//     root=deletefromBST(root,30);
//     levelordertraversal(root);
//     return 0;
// }