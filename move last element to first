#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node *push(node **head,int data)
{
   node *newnode = new node();
   newnode->data = data;
   newnode->next = *head;
   *head = newnode;
}

node* display(node *head)
{
   while(head!=NULL)
   {
      cout<<head->data;
      head=head->next;
   }
}

node* func(node **head)
{
   node *last,*lastsec;
   last=*head;
   lastsec=NULL;
   while(last->next!=NULL)
   {
      lastsec=last;
      last=last->next;
   }
   lastsec->next=NULL;
   last->next=*head;
   *head=last;


}

int main()
{

   node *head=NULL,*newnode;
   push(&head,1);
   push(&head,2);
   push(&head,3);
   push(&head,4);
   push(&head,5);
   push(&head,6);
//display(head);
cout<<endl;
func(&head);
display(head);
return 0;
}
