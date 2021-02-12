class Solution{
    public:
    int height(struct Node* node)
    {
        if(node==NULL)
        {
            return 0;
        }
        int x=height(node->left);
        int y=height(node->right);
        return x>y?1+x:1+y;
    }
};
