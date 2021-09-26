Node* reverseDLL(Node * head)
{
      while(head!=NULL)
    {
        struct Node *temp=head->next;
        head->next=head->prev;
        head->prev=temp;
        if(head->prev==NULL)
        {
            break;
        }
        head=head->prev;
    }
    return head;
}
