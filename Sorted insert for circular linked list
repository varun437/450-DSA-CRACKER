class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       Node *temp=head;
       Node *newnode=new Node(data);
      
       if(head==NULL)
       {
           newnode->next=head;
           head=newnode;
       }
       
       else if(temp->data>data)
       {
         while(temp->next!=head)
         temp=temp->next;
         temp->next=newnode;
         newnode->next=head;
         head=newnode;
        
       }
       else
       {
        while(temp->next!=head && temp->next->data<data)
        {
            temp=temp->next;
        }
           newnode->next=temp->next;
           temp->next=newnode;
           
       }
       
      
       return head;
    }
};
