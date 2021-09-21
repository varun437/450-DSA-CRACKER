struct node*update(struct node*start,int p)
{
    struct node *last=start;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    struct node *head=start;
    while(p--)
    {
        struct node *temp=head->next;
        last->next=head;
        head->prev=last;
        temp->prev=NULL;
        last=last->next;
        head=temp;
    }
    last->next=NULL;
    return head;
}
