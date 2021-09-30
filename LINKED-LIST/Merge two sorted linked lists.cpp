Node* sortedMerge(Node* head1, Node* head2)  
{ 
  Node *c=new Node(0);
   Node *temp=c;
   
   while(head1 && head2)
   {
       if(head1->data > head2->data)
       {
           temp->next=new Node(head2->data);
           temp=temp->next;
           head2=head2->next;
       }
       else
       {
           temp->next=new Node(head1->data);
           temp=temp->next;
           head1=head1->next;
       }
   }
   
   while(head1)
   {
       temp->next=new Node(head1->data);
       head1=head1->next;
       temp=temp->next;
   }
   while(head2)
   {
       temp->next=new Node(head2->data);
       head2=head2->next;
       temp=temp->next;
   }
   
   return c->next;

}  
