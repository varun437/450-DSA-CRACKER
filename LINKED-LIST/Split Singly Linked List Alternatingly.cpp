void alternatingSplitList(struct Node* head) 
{
    Node *temp=head;
    Node *atemp=NULL;
    Node *btemp=NULL;
    int pos=1;
    while(temp!=NULL)
    {
        if(pos%2==1)
        {
            if(a==NULL)
            {
                a=atemp=temp;
            }
            else
            {
                atemp->next=temp;
                atemp=atemp->next;
            }
        }
        else
        {
            if(b==NULL)
            {
                b=btemp=temp;
            }
            else
            {
                btemp->next=temp;
                btemp=btemp->next;
            }
          
        }
        pos++;
          temp=temp->next;
    }
    if(a!=NULL)
    atemp->next=NULL;
    if(b!=NULL)
    btemp->next=NULL;
}
