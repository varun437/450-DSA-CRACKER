int fractional_node(struct Node *head, int k)
{     
    Node *temp=head;
    int count=0;
    while(temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
     
    int i =count/k;
    temp=head;
    while(i--)
    {
        temp=temp->next;
    }
return temp->data;
}
