struct Node* arrange(Node *head)
{
  /* Node *temp=head;
   Node *head2=NULL;
   while(temp!=NULL)
   {
       if(temp->data=='a'||temp->data=='e'||temp->data=='o'||temp->data=='i'||temp->data=='u')
       {
           Node *extra = new Node(temp->data);
           extra->next=head2;
           head2=extra;
       }
       temp=temp->next;
   }
      Node *temp1=head;
      while(temp1!=NULL)
   {
       if(temp1->data!='a'||temp1->data!='e'||temp1->data!='o'||temp1->data!='i'||temp1->data!='u')
       {
           Node *extra1 = new Node(temp1->data);
           extra1->next=head2;
           head2=extra1;
       }
       temp1=temp1->next;
   }
   
   return head2;
   */
   Node *t=head,*temp=head;
Node *ans=new Node(0);
Node *g=ans;
while(t!=NULL)
{
if(t->data=='a' || t->data=='e' || t->data=='i' || t->data=='o' || t->data=='u')
{
Node *temp=new Node(t->data);
ans->next=temp;
ans=temp;
}
t=t->next;
}
while(temp!=NULL)
{
if(temp->data!='a' && temp->data!='e' && temp->data!='i' && temp->data!='o' && temp->data!='u')
{
Node *temp1=new Node(temp->data);
ans->next=temp1;
ans=temp1;
}
temp=temp->next;
}
return g->next;
}
