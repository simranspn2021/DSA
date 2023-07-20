class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector<int> zigZagTraversal(Node* root)
    {vector<int>ans;
        if(root==NULL)
        {
            return ans ;
        }
        bool lefttoright=true;
    	
    	queue<Node*>q;
    	q.push(root);
    	while(!q.empty())
    	{
    	    int sizeq=q.size();
    	    vector<int>vect(sizeq);
    	    for(int i=0;i<sizeq;i++)
    	    {
    	        Node* temp=q.front();
    	        q.pop();
    	        int index=lefttoright?i:sizeq-1-i;
    	        vect[index]=temp->data;
    	        if(temp->left)
    	        {
    	            q.push(temp->left);
    	        }
    	        if(temp->right)
    	        {
    	            q.push(temp->right);
    	        }
    	        
    	    }
    	    lefttoright=!lefttoright;
    	    
    	    for(auto i:vect)
    	    {
    	        ans.push_back(i);
    	    }
    	}
    	return ans;
    	
    	
    	
    }
};