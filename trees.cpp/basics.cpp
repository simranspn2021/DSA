#include<iostream>
#include<queue>
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
node* createtree(node* root)
{
    int data;
    cout<<"enter the data to insert";
    cin>>data; 
    root=new node(data);

    if(root->data==-1)
    {
        return NULL;
    }
    cout<<"enter the data to insert in left of"<<root->data;
    root->left=createtree(root->left);
    cout<<"enter the data to insert in right of"<<root->data;
    root->right=createtree(root->right);
    return root;
}
//now we will learn about level order traversal
void printlevelordertraversal(node* root)
{

queue<node*>q;
q.push(root);
q.push(NULL);
while(!q.empty())
{
    node* temp=q.front();

    q.pop();
    if(temp==NULL)
    {
        cout<<endl;
        if(!q.empty())
        {
            q.push(NULL);
        }
    }
    else{
            cout<<temp->data;
    if(temp->left)
    {
        q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }
    }
}
}
int main()
{
    node* root;
    root=createtree(root);
    printlevelordertraversal(root);
    return 0;
}