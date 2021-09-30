class Solution{
  public:
  Node* merge(Node* l1,Node* l2)
{
if(!l1)
return l2;
if(!l2)
return l1;

if(l1->data<l2->data)
{
l1->next=merge(l1->next,l2);
return l1;
}
else
{
l2->next=merge(l1,l2->next);
return l2;
}
}
Node* mergeSort(Node* head) {
// your code here
if(head==NULL || head->next==NULL)
return head;

Node* slow=head;
Node* fast=head->next;

while(fast && fast->next)
{
slow=slow->next;
fast=fast->next->next;
}

Node* newHead=slow->next;
slow->next=NULL;

return merge(mergeSort(head),mergeSort(newHead));

}
  /*
  void findmiddle(Node *curr,Node **first,Node **second)
  {
      Node *fast=curr;
      Node *slow=curr;
      while(fast!=NULL&& fast->next!=NULL)
      {
          fast=fast->next->next;
          slow=slow->next;
      }
      *first=curr;
      *second=slow->next;
        slow->next=NULL;
  }
  
  Node *mergeboth(Node *first,Node *second)
  {
      if(!first)
      return second;
      if(!second)
      return first;
      Node *temp=NULL;
      if(first->data< second->data)
      {
          temp=first;
          temp->next=mergeboth(first->next,second);
      }
      else
      {
          temp=second;
          temp->next=mergeboth(first,second->next);
      }
      return temp;
  }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node** head) {
   Node *curr=*head;
   Node *first=NULL,*second=NULL;
   
   if(*head==NULL || (*head)->next==NULL)
   return;
   
   findmiddle(curr,&first,&second);
   mergeSort(&first);
   mergeSort(&second);
   *head = mergeboth(first,second);
        
        
    }
    */
};
