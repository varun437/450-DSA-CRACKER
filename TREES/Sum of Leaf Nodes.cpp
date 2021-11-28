int sumLeaf(Node* root)
{
    if(root==NULL)
    return 0;
    if(root->right==NULL && root->left==NULL)
    return root->data;
    
    return sumLeaf(root->left)+sumLeaf(root->right);
}
