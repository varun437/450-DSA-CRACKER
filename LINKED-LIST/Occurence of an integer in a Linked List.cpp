 int count(struct node* head, int search_for)
    {
    //add your code here
    int c=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==search_for)
        {
            c++;
        }
        temp=temp->next;
    }
    return c;
    }
