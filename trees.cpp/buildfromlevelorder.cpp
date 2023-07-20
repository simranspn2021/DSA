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
void buildfromlevelorder(node* &root)
{
    int data;
    cout<<"enter the data for root"<<endl;
    cin>>data;
    root=new node(data);
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<"enter the data for left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1)
        {
            temp->left=new node(leftdata);
            q.push(temp->left);

        } 
        cout<<"enter the data for the right of "<<temp->data<<endl;  
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1)
        {
            temp->right=new node(rightdata);
            q.push(temp->right);

        } }

}
int main()
{
    node* root=NULL;
   buildfromlevelorder(root);
    printlevelordertraversal(root);

    return 0;
}