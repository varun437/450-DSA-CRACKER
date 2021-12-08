class Solution
{
public:
    int helper(struct Node *root,int &tot)
    {
        if(!root)
        return 0;
        int l=helper(root->left,tot);
        int r=helper(root->right,tot);
        tot+=abs(l-r);
        return l+r+root->data;
    }

    // Your are required to complete this function
    // function should return the tilt of the tree
    int tiltTree(Node *root)
    {
        int tot=0;
        helper(root,tot);
        return tot;
    }
};
