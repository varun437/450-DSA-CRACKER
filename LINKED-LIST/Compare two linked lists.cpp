int compare(Node *list1, Node *list2) 
{
    Node *temp1,*temp2;
    temp1=list1;
    temp2=list2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->c>temp2->c)
        return 1;
        
        if(temp1->c<temp2->c)
        return -1;
        
        temp1=temp1->next;
        temp2=temp2->next;
    }
    
    if(temp1)
    return 1;
    if(temp2)
    return 0;
    
    if(temp1==NULL && temp2==NULL)
    return 0;
}
