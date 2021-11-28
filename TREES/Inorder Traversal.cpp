class Solution {
  public:
  
  void inder(Node *root,vector<int> &v)
  {
      if(root==NULL)
      return;
      inder(root->left,v);
      v.push_back(root->data);
      inder(root->right,v);
  }
  
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        vector<int> v;
        inder(root,v);
        return v;
    }
};
