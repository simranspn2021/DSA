//time complexity of insertion in bst is O(logn)
#include<iostream>
#include<queue>
using namespace std;
class Node 
{
public:
int data;
Node* left;
Node* right;
Node(int d)
{
  this->data=d;
  this->left=NULL;
  this->right=NULL;
}

};
Node* insertatbst(Node* root,int data)
{
      if(root==NULL)
    {
         root=new Node(data);
        return root;
    }
    if(data>root->data)
    {
        root->right=insertatbst(root->right,data);
    }
    else{
        root->left=insertatbst(root->left,data);
    }
    return root;

}
void insertdata(Node* &root)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        root=insertatbst(root,data);
        cin>>data;
    }
}
void levelordertraversal(Node* root)
{
queue<Node*>q;
q.push(root);
q.push(NULL);
while(!q.empty())
{
    Node* temp=q.front();

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
    Node* root=NULL;
    insertdata(root);
    levelordertraversal(root);
    return 0;
}