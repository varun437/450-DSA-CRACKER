#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
};

struct node *reverse(struct node *head,int k)
{
  struct node *current=head;
   struct node *next=NULL;
   struct node *prev=NULL;
   int count=0;
while(next!=NULL && count<k)
{
   next=current->next;
   current->next=prev;
   prev=current;
   current=next;
   count++;

}
if(next !=NULL)
{
   head->next = reverse(next,k);

}
return prev;
}

void display(struct node *head)
{
   while(head!=NULL)
   {
      cout<<head->data;
      head=head->next;
   }


}

int main()
{
   int x=1,k;
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
display(head);
cout<<endl<<"enter the value of k:"<<endl;
cin>>k;
head = reverse(head,k);
display(head);
return 0;
}
