Node* sortedInsert(Node * head, int x)
{
   Node *temp=head;
    Node *curr;
    Node *newNode=getNode(x);
    while(temp!=NULL)
    {
        
        if(head->data>x || head==NULL)
        {
            newNode->next=head;
            newNode->next->prev=newNode;
            head=newNode;
        }
        else
        {
            curr=head;
            
            while(curr->next!=NULL && curr->next->data<x)
            curr= curr->next;
            
            newNode->next=curr->next;
            if(curr->next!=NULL)
            newNode->next->prev=newNode;
            
            curr->next=newNode;
            newNode->prev=curr;
        }
        return head;
        
    }
/*
struct Node* current; 
if (head == NULL) 	
head = getNode(x); 
else if ((head)->data >= x)
{ 	 Node *newNode=getNode(x); 	
newNode->next = head; 	
newNode->next->prev = newNode; 	
head = newNode; 	} 
else
{ 		current = head;
while (current->next != NULL && current->next->data < x) 		
current = current->next; 		 		 	
Node *newNode=getNode(x); 	
newNode->next = current->next; 		
if (current->next != NULL) 		
newNode->next->prev = newNode; 	
current->next = newNode; 	
newNode->prev = current; 	} 	 
return head;
*/
}
