int getNthFromLast(Node *head, int n)
{
        struct Node *temp=head;
   for(int i=0;i<n;i++)
   {   if(temp==NULL)
    return -1;
       temp=temp->next;
   }
 
 while(temp!=NULL)
 {
     head=head->next;
     temp=temp->next;
 }
 return head->data;
}
