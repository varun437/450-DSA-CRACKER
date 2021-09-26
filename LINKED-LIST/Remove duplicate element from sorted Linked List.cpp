Node *removeDuplicates(Node *head)
{
   Node *temp=head;
      Node *rem=NULL;
      while(temp->next!=NULL)
      {
          if(temp->data==temp->next->data)
          {
              rem=temp->next;
              temp->next=temp->next->next;
              free(rem);
          }
          else
          {
              temp=temp->next;
          }
      }
      return head;
}
