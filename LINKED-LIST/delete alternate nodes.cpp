void deleteAlt(struct Node *head){
    Node *temp,*curr;
    curr=head;
    while(curr!=NULL&&curr->next!=NULL)
    {
        temp=curr->next;
        curr->next=curr->next->next;
        free(temp);
        curr=curr->next;
    }
}
