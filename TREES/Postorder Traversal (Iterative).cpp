class Solution{
    public:
    vector<int> postOrder(Node* node) {
        vector<int> v;
        stack<Node*> s;
        s.push(node);
        while(!s.empty())
        {
            Node *temp=s.top();
            s.pop();
            v.push_back(temp->data);
            if(temp->left!=NULL)
            s.push(temp->left);
            if(temp->right!=NULL)
            s.push(temp->right);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
