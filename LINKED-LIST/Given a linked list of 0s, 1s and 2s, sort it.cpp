class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
    Node *zero=new Node(0);
    Node *one=new Node(0);
    Node *two=new Node(0);
    Node *curr=head;
    Node *temp1=zero;
    Node *temp2=one;
    Node *temp3=two;
    while(curr)
    {
        if(curr->data==0)
     {   temp1->next=curr;
        temp1=temp1->next;
        curr=curr->next;
     }
        else if(curr->data==1)
        {
            temp2->next=curr;
            temp2=temp2->next;
            curr=curr->next;
        }
        else
        {
            temp3->next=curr;
            temp3=temp3->next;
            curr=curr->next;
        }
    }

temp1->next = (one->next)? (one->next) : (two->next);
temp2->next=two->next;
temp3->next=NULL;
head=zero->next;
    
    
    
    return head;
    
    }
};
