void preder(Node *root,vector<int> &v)
{
    if(root==NULL)
    return;
    v.push_back(root->data);
    preder(root->left,v);
    preder(root->right,v);
    
}


vector <int> preorder(Node* root)
{
    vector<int> v;
    preder(root,v);
    return v;
}
