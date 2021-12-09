void helper(struct Node *root,long long temp,long long &ans)
{
    temp=(temp*10);
    temp+=root->data;
    if(root->left==NULL && root->right==NULL)
    {
        ans+=temp;
        return;
    }
    if(root->left!=NULL)
    helper(root->left,temp,ans);
    if(root->right!=NULL)
    helper(root->right,temp,ans);
}



long long treePathsSum(Node *root)
{
    long long temp=0;
    long long ans=0;
    helper(root,temp,ans);
    return ans;
}
