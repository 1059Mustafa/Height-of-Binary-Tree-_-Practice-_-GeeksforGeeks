class Solution{
    public:
    int height(struct Node* node)
    {
        int h=0;
        if(node==NULL)
        {
            return 0;
        }
        queue<Node*>q;
        q.push(node);
        while(q.size()>0)
        {
            int size=q.size();
            while(size--)
            {
                Node* temp=q.front();
                if(temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right!=NULL)
                {
                    q.push(temp->right);
                }
                q.pop();
            }
            h++;
        }
        return h;
    }
};
