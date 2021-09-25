Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    
    while(curr != NULL)
    {
        Node *next = curr->next;
        
        curr->next = prev;
        prev = curr;
        
        curr = next;
    }
    
    return prev;
}
class Solution
{
    public:
    Node* addOne(Node *head) 
   {
/*        long long sum=0;
        Node *temp=head;
        while(temp)
        {
            sum = sum*10 + temp->data;
            temp=temp->next;
        }
        sum=sum+1;
        Node *ans = new Node(sum);
        cout<<sum;
        return ans;
    }*/
    head = reverse(head);
    
    Node *curr = head, *prev = head;
    
    int sum = (curr->data + 1);
    curr->data = sum % 10;
    int carry = sum / 10;

    curr = curr->next;
    
    while(curr != NULL)
    {
        sum = (curr->data + carry);
        curr->data = sum % 10;
        carry = sum / 10;
        
        prev = curr;
        
        curr = curr->next;
    }
    
    if(carry)
    {
        prev->next = new Node(carry);
    }
    
    head = reverse(head);
    
    return head;
   }
};
