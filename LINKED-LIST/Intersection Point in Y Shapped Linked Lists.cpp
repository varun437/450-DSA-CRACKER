int intersectPoint(Node* head1, Node* head2)
{
    Node *temp1=head1;
    Node *temp2=head2;
    int c1=1;
    int c2=1;
    while(temp1!=NULL)
    {
        c1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        c2++;
        temp2=temp2->next;
    }
    temp1=head1;
    temp2=head2;
    int diff=abs(c1-c2);
    if(c1>c2)
    {
        while(diff--)
        {
            temp1=temp1->next;
        }
    }
    else
    {
        while(diff--)
        {
            temp2=temp2->next;
        }
    }
    while(temp1!=temp2)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1)
    return temp1->data;
    return -1;
}
