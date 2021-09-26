
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
       node *curr=head;
       node *next=NULL;
       node *prev=NULL;
       int n=k;
       
       while(n-- && curr!=NULL)
       {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       if(head!=NULL)
       head->next=reverse(next,k);
       return prev;
        
        
    }
};
