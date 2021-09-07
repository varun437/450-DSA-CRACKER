void deleteNode(struct Node **head, int key)
{
    Node *temp=*head;
    Node *prev=NULL;
    while(temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete(temp);

}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
/*    Node *prev,*curr,*next;
    curr=*head_ref;
    next=*head_ref;
    prev=NULL;
    while(curr)
    {
       next=next->next;
       curr->next=prev;
       prev=curr;
       curr=next;
    }
    prev->next=*head_ref;
    
}*/
struct Node *temp=*head_ref;
struct Node *back,*front;
front=NULL;
while (temp->next!=*head_ref)
{
temp=temp->next;
}
back=temp;
struct Node *temp2=*head_ref;
while (temp2->next!=*head_ref)
{
front=temp2->next;
temp2->next=back;
back=temp2;
temp2=front;
}
temp2->next=back;
*head_ref=temp2;
}
