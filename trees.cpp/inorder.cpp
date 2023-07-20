//inorder mai left node right hota hai 
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildtree(node* root)
{
    cout<<"enter the data to insert";
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"enter the data to be inserted to the left of "<<root->data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter te data to be inserted to the right of "<<root->data<<endl;
    root->right=buildtree(root->right);
    return root;

}
void inordertraversal(node* root)
{
   if(root==NULL)
   {
    return;
   }
   inordertraversal(root->left);
   cout<<root->data;
   inordertraversal(root->right);
}
int main()
{
    node* root;
    root=buildtree(root);
    inordertraversal(root);
    return 0;
}