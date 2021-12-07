class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(!node)
        return 0;
        
        return 1+(max(height(node->left),height(node->right)));
    }
};

              (OR)

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
           if(!node)return 0;
        if(!node->left and !node->right)return 1;
        int l=INT_MIN,r=INT_MIN;
        if(node->left)
            l=height(node->left);
        if(node->right)
            r=height(node->right);
        return max(l,r)+1;
    }
};
