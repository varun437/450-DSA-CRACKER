class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int> v;
        stack<Node*> s;
        Node *curr=root;
        while(curr!=NULL || (!s.empty()))
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            curr=s.top();
            s.pop();
            v.push_back(curr->data);
            curr=curr->right;
        }
        return v;
    }
