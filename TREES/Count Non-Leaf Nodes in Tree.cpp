class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        
        if(root==NULL ||(root->right==NULL && root->left==NULL))
        return 0;
        
        return 1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
    }
};
