Node *convertExpression(string str,int i)
{
    Node *root=new Node(str[i]);
    if(i==str.length()-1)
    return root;
    i++;
    if(str[i]=='?')
    {
        i++;
        root->left=convertExpression(str,i);
        return root;
    }
    else if(str[i]==':')
    {
        i++;
        root->right=convertExpression(str,i);
        return root;
    }
    else
    {
        return root;
    }
    
}
