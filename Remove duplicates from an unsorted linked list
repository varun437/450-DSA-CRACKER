class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
      unordered_set<int> s;
       Node *temp=head;
       Node *prev=NULL;
       while(temp!=NULL)
       {
           if(s.find(temp->data)!=s.end())
           {
               prev->next=temp->next;
               temp=temp->next;
           }
           else
           {
           s.insert(temp->data);
           prev=temp;
           temp=temp->next;
           }
       }
       return head;
    }
};
