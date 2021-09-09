#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
};


void loop(struct node *head)
{
   node *slow,*fast;
   slow=fast=head;
   while(slow && fast && fast->next)
   {
      slow=slow->next;
      fast=fast->next->next;

      if(slow==fast)
      {
         cout<<"loop found";
         break;
      }
   }


}


int main()
{
   int x=1,y;
   struct node *head=NULL,*newnode,*temp;
   while(x==1)
   {
   newnode=(struct node *)malloc(sizeof(struct node));
   cout<<"enter data";
   cin>>newnode->data;
   newnode->next=0;

   if(head==0)
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
temp->next=head;
loop(head);
return 0;
}
