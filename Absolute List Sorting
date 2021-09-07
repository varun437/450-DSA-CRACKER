void sortList(Node** head)
{
  Node *prev,*curr;
  prev=*head;
  curr=(*head)->next;
  while(curr)
  {
      if(prev->data>curr->data)
      {
           prev->next=curr->next;
           curr->next=*head;
          *head=curr;
          prev=curr;
      }
      else
      prev=curr;
      
      curr=curr->next;
  }
  
}
