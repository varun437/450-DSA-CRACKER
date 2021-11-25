int minValue(Node* root) {
    if(root==NULL)
    return -1;
    
    if(root->left)
    minValue(root->left);
    else
    return root->data;
}
