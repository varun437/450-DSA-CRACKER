#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;
};

node* display(node *head)
{
   while(head!=NULL)
   {
      cout<<head->data;
      head=head->next;
   }
}

node* first(node *head)
{
   if(head==NULL)
   {
      return NULL;
   }
   node *slow,*fast,*start;
   slow=fast=head;
   start=NULL;
   while(slow && fast && fast->next)
   {
      slow=slow->next;
      fast=fast->next->next;

      if(slow==fast)
      {
           start=head;
           while(start!=slow)
           {
              start=start->next;
              slow=slow->next;
              break;
           }
      }
   }
cout<<start->data;
}

int main()
{
   int x=1;
   node *head=NULL,*newnode,*temp;
   while(x==1)
   {
   newnode=(struct node *)malloc(sizeof(struct node));   
   cout<<"enter data";
   cin>>newnode->data;
   newnode->next=0;

   if(head==NULL)
   {
      head=temp=newnode;
   }
   else
   {
      temp->next=newnode;
      temp=newnode;
   }
  cout<<"do you want to enter one more:(0/1)";
  cin>>x;
   }
temp->next=head->next;
//display(head);
cout<<endl;
first(head);
return 0;
}
