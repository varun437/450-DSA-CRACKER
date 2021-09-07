void mergeList(struct Node **p, struct Node **q)
{
     // Code hereNode 
    Node *first=*p,*second=*q;
while(first && second)
{
*q=second->next;
second->next=first->next;
first->next=second;
first=first->next->next;
second=*q;
}
}
