void poder(Node *root,vector<int> &v)
{
    if(root==NULL)
    return;
    poder(root->left,v);
    poder(root->right,v);
    v.push_back(root->data);
}


//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
    vector<int> v;
    poder(root,v);
    return v;
}
