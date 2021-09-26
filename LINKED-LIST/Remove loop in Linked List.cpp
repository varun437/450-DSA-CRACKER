class Solution
{
    public:
    
  /*  void deletek(Node *head,Node *slow)
    {
        Node *f=head;
        Node *s=slow;
        while(s!=f)
        {
            s=s->next;
            f=f->next;
        }
       f->next=NULL;
    } */
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
       /* Node *slow=head;
        Node *fast=head;
        while(slow && fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                deletek(head,slow);
            }
        }*/
        Node *slow=head;
Node *fast = head;
if(head == NULL || head->next == NULL)
return;
while(fast!=NULL && fast->next!=NULL){
slow = slow->next;
fast = fast->next->next;
if(slow == fast){
break;
}
}
if(slow==head){
while(slow->next!=head){
slow=slow->next;
}
slow->next = NULL;
}
if(slow == fast){
slow = head;
while(slow->next != fast->next){
if(slow == fast->next){
fast->next == NULL;
}
slow = slow->next;
fast = fast->next;
}

fast->next=NULL;
}
    }
   
};
