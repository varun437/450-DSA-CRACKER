int getSize(Node* node)
{
    if(!node)
    return 0;
    return 1+getSize(node->left)+getSize(node->right);
}
