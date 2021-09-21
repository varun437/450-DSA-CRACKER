struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
   set<int> s;
   Node *t1=head1;
   while(t1!=NULL)
   {
       s.insert(t1->data);
       t1=t1->next;
   }
   Node *t2=head2;
   while(t2!=NULL)
   {
       s.insert(t2->data);
       t2=t2->next;
   }
   auto it =s.begin();
   Node *head3=new Node(*it);
   Node *temp=head3;
   it++;
   for( ; it!=s.end();it++)
   {
       temp->next = new Node(*it);
       temp=temp->next;
   }
   return head3;
   
}
