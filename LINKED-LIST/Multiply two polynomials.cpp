class GfG
{
  /*  struct node *insert(Node *head3,int res1,int res2)
    {
        Node *temp=new Node(0,0);
        Node *curr=NULL;
        temp->coef= res1;
        temp->expo= res2;
        
        if(head3==NULL)
        {
            curr=head3=temp;
        }
        else
        {
            curr->next=temp;
            curr=curr->next;
        }
    }
    
    Node proOfPolynomials(Node head1, Node head2, int n1, int n2)
    {
	    Node *ptr1=head1;
	    Node *ptr2=head2;
	    while(ptr1!=NULL)
	    {
	        ptr2=head2;
	        while(pt2!=NULL)
	        {
	            res1= ptr1->coef * ptr2->coef;
	            res2= ptr1->expo + ptr2->expo;
	            head3 = insert(head3,res1,res2)
	            ptr2=ptr2->next;
	        }
	        ptr1=ptr1->next;
	    }
    }
    */
    Node proOfPolynomials(Node head1, Node head2, int n1, int n2)
{
int len=n1+n2-1;
Node ret=new Node(0);
Node curr=ret;
while(len-->1){
curr.next=new Node(0);
curr=curr.next;
}
Node curr1=head1;
Node curr2,temp=ret;
while(curr1!=null){
curr2=head2;
curr=temp;
while(curr2!=null){
curr.data+=curr1.data*curr2.data;
curr=curr.next;
curr2=curr2.next;
}
temp=temp.next;
curr1=curr1.next;
}
return ret;
}
}
