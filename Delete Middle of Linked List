Node* deleteMid(Node* head)
{
   Node *temp=head;
   Node *slow,*fast,*prev;
   prev=slow=fast=head;
   
   while(fast!=NULL && fast->next!=NULL)
   {
       prev=slow;
       slow=slow->next;
       fast=fast->next->next;
   }
   prev->next=slow->next;
   free(slow);
   return head;
}
