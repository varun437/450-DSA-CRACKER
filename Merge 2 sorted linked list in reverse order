struct Node *reverse(Node *head)
{
    Node *next,*prev,*curr;
    prev=NULL;
    curr=head;
    next=head;
    while(curr!=NULL)
    {
        next=next->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

struct Node * mergeResult(Node *node1,Node *node2)
{
    Node *head2=NULL;
    Node *node3=NULL;
    if(node1==NULL && node2==NULL)
    return NULL;
    if(node1->data<node2->data)
    {
        head2=node3=node1;
        node1=node1->next;
    }
    else
    {
        head2=node3=node2;
        node2=node2->next;
    }
    while(node1!=NULL && node2!=NULL)
    {
        if(node1->data<node2->data)
        {
        
            node3->next=node1;
            node3=node1;
            node1=node1->next;
        }  
        else
        {
            
            node3->next=node2;
            node3=node2;
            node2=node2->next;
        }
    }
    if(node1!=NULL)
    {
        node3->next=node1;
        node1=node1->next;
        node3=node3->next;
    }
    if(node2!=NULL)
    {
        node3->next=node2;
        node2=node2->next;
        node3=node3->next;
    }
    Node *start = reverse(head2);
    return start;
}
