class Solution
{
    public:
    Node *reverse(Node *head)
    {
        Node *cur=head;
        Node *prev=NULL,*next=NULL;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        Node *even=new Node(0);
        Node *od=new Node(0);
        Node *curr=odd;
        Node *e=even,*o=od;
        int pos=1;
        while(curr!=NULL)
        {
            if(pos%2==1)
            {
                o->next=curr;
                o=o->next;
            }
            else
            {
                e->next=curr;
                e=e->next;
            }
            curr=curr->next;
            pos++;
        }
    e->next=NULL;    
    Node* add = reverse(even->next);
    o->next=add;

    }
};
