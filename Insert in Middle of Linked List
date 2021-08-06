//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	
  struct Node* fast = head;
struct Node* slow = head;
struct Node* create = (struct Node*)malloc(sizeof(struct Node)*1);
create->data=x;
while(fast->next&&fast->next->next)
{
fast=fast->next->next;
slow=slow->next;
}
create->next=slow->next;
slow->next=create;
return head;/*  Node *slow,*fast,*temp;
    slow=fast=head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    temp=new Node(x);
    temp->next=slow->next;
    slow->next=temp;
    return head;*/
    
}
