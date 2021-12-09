
class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        int res=INT_MIN;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
        int n=q.size();
        int sum=0;
        while(n--)
        {
            Node *temp=q.front();
            q.pop();
            sum+=temp->data;
        if(temp->left!=NULL)
        q.push(temp->left);
        if(temp->right!=NULL)
        q.push(temp->right);
        }
        res=max(sum,res);
        }
        return res;
    }
};
