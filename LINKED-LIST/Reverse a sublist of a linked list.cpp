class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        
        Node *start=NULL;
        Node *temp=NULL;
        Node *curr=head;
        for(int i=1;i<m;i++)
        {
            if(start==NULL)
            {
                start=temp=curr;
            }
            else
            {
                temp->next=curr;
                temp=temp->next;
            }
            curr=curr->next;
        }
        Node *next=NULL,*prev=NULL;
        Node *startrev=curr;
        while(curr!=NULL && m-n!=1)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            m++;
        }
        startrev->next=curr;
        
        if(start!=NULL)
        {
            temp->next=prev;
            return start;
        }
        return prev;
    }
};
