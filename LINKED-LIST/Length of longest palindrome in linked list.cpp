int find(Node *a,Node *b)
{
    int res=0;
    while(a && b)
    {
        if(a->data==b->data)
        res++;
        else
        break;
        
        a=a->next;
        b=b->next;
    }
    
    return res;
    
}

/*The function below returns an int denoting
the length of the longest palindrome list. */
int maxPalindrome(Node *head)
{
    Node *curr=head;
    Node *prev=NULL,*next=NULL;
    int res=0;
    while(curr)
    {
        next=curr->next;
        curr->next=prev;
        
        res= max(res,2 * find(prev,next) + 1);
        res= max(res,2 * find(curr,next));
        
        prev=curr;
        curr=next;
        
    }
    
    return res;
    
    
}
