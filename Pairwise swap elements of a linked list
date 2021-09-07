class Solution
{
    public:
    Node* swap(struct Node *head)
    {
        Node *temp;
        if(head==NULL)
        return NULL;
        if(head->next==NULL)
        return head;
        temp=head->next;
        head->next=swap(head->next->next);
        temp->next=head;
        return temp;
    }
    
    Node* pairWiseSwap(struct Node* head) 
    {
        Node *temp=head;
        Node *ans=swap(temp);
        return ans;
    }
};
