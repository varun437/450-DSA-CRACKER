class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        Node *start=new Node(0);
        start->next=head_ref;
        Node *curr=head_ref;
        Node *prev=start;
        
        while(curr)
        {
            if(curr->next && curr->next->data < curr->data)
            {
                while(prev->next && prev->next->data < curr->next->data)
                 prev=prev->next;
                 Node *temp=prev->next;
                 prev->next=curr->next;
                 curr->next = curr->next->next;
                 prev->next->next = temp;
                 prev=start;
                
            }
            else
            {
              curr=curr->next;
            }
            
        }
        
        return start->next;
        
    }
};
