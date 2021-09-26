class Solution
{
    public:
    Node *copyList(Node *head)
    {
      /*  Node *cur=head;
        Node *temp=NULL;
        while(cur)
        {
            temp=cur->next;
            cur->next=new Node(cur->data);
            cur->next->next=temp;
            cur=temp;
        }
        cur=head;
        while(cur)
        {
        cur->next->arb=cur->arb? cur->arb->next : cur->arb;
        cur=cur->next->next;
        }
        Node *original=head;
        Node *copy=head->next;
        temp=copy;
        while(original && copy)
        {
            original->next=head->next->next;
            original=original->next->next;
            copy->next=copy->next?copy->next->next:copy->next;
            copy=copy->next;
        }
        return temp;*/

Node* curr = head, *temp;
 
    // insert additional node after
    // every node of original list
    while (curr)
    {
        temp = curr->next;
 
        // Inserting node
        curr->next = new Node(curr->data);
        curr->next->next = temp;
        curr = temp;
    }
 
    curr = head;
 
    // adjust the random pointers of the
    // newly added nodes
    while (curr)
    {
        if(curr->next)
            curr->next->arb = curr->arb ?
                                 curr->arb->next : curr->arb;
 
        // move to the next newly added node by
        // skipping an original node
        curr = curr->next?curr->next->next:curr->next;
    }
 
    Node* original = head, *copy = head->next;
 
    // save the start of copied linked list
    temp = copy;
 
    // now separate the original list and copied list
    while (original && copy)
    {
        original->next =
         original->next? original->next->next : original->next;
 
        copy->next = copy->next?copy->next->next:copy->next;
        original = original->next;
        copy = copy->next;
    }
 
    return temp;
    }

};
