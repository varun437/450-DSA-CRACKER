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

node* func(node *head)
{
   node *current,*tem;
   current=head;
   while(current->next!=NULL)
   {
      if(current->data==current->next->data)
      {
         tem=current->next->next;
         free(current->next);
         current->next=tem;
      }
      else
      {
                current=current->next;
      }

   }

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

display(head);
cout<<endl;
func(head);
display(head);
return 0;
}
