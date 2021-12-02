class Solution{
  public:
    /*You are required to complete below method */
    int evalTree(node* root) {
        if(!root)
        return 0;
        
        int l=evalTree(root->left);
        int r=evalTree(root->right);
        
        if(root->data=="*")return l*r;
        else if(root->data=="+") return l+r;
        else if(root->data=="-") return l-r;
        else if(root->data=="/") return l/r;
        else
        return stoi(root->data);
    }
};
