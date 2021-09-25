class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node *reverse(Node *head)
    {
        Node *prev=NULL;
        Node *curr=head;
        Node *next=head;
        while(curr!=NULL)
        {
            next=next->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first);
        second=reverse(second);
        Node *third=NULL;
        int carry=0;
        int sum=0;
        while(first!=NULL || second!=NULL || carry)
        {
            sum=carry;
            
            if(first!=NULL)
             {
                 sum=sum+first->data;
                 first=first->next;
             }
             
             if(second!=NULL)
             {
                 sum=sum+second->data;
                 second=second->next;
             }
           carry=sum/10;
           Node *temp=new Node(sum%10);
           temp->next=third;
           third=temp;
              
          }
          return third;
    }
};
