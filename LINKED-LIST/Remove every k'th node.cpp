/*Node *freelist(Node *head)
{ 
    Node *temp=head;
    while(head!=NULL)
    {
        temp=head->next;
        delete(head);
        head=temp;
    }
}*/

Node* deleteK(Node *head,int K)
{
   /* if(head==NULL)
       return NULL;
       
    if(K==1)
    {
        freelist(head);
        return NULL;
    }
    Node *temp=head;
    Node *prev=NULL;
    Node *extra=NULL;
    int count=1;
    while(temp!=NULL)
    {
        if(count%K!=0)
        {
            prev=temp;
            temp=temp->next; 
            count++;
        }
        else if(count%K==0)
        {
            extra=temp;
            temp=temp->next;
            prev->next=extra->next;
            delete(extra);
            count++;
        }
    }
    return head;
  */
  if(K==0){
return head;
}
if(head==NULL || K==1){
return 0;
}
struct Node *temp=head;
struct Node *pre;
int count=1;
while(temp!=NULL)
{
     if(count==K)
      {
      pre->next=temp->next;
      count=0;
      }
      pre=temp;
      temp=temp->next;
      count++;
 }
return head;
}
