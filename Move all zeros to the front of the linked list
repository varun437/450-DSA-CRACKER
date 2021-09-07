void moveZeroes(struct Node **head)
{
    Node *temp=*head;
    Node *prev=temp;
    temp=temp->next;
    while(temp!=NULL)
    {
        if(temp->data==0)
        {
            prev->next=temp->next;
            temp->next=*head;
            *head=temp;
            temp=prev->next;
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }
    }
}
