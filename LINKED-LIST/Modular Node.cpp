// Your task is to complete the function
// function should return the modular Node
// if no such node is present then return -1
int modularNode(Node* head, int k)
{
    Node *temp=head;
	int index=1;
	int ans=-1;
	while(temp!=NULL)
	{
	    if(index%k==0)
	    {
	        ans=temp->data;
	    }
	    index++;
	    temp=temp->next;
	}

 return ans;
  /* int index = 1;
    int res = -1;
    
    while(head)
    {
        if(index % k == 0)
        {
            res = head->data;
        }
        
        index++;
        head = head->next;
    }
    
    return res */

}
