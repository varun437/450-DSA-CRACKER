class Solution{
public:
    Node* divide(int N, Node *head){
    struct Node *even,*odd,*o,*e;
        even=odd=NULL;
        while(head!=NULL)
        {
            if(head->data%2!=0)
            {
              if(odd==NULL)
              {
                  odd=head;
                   o=head;
              }
              else
              {
                  o->next=head;
                  o=o->next;
              }
            }
             else if(head->data%2==0)
              {
                  if(even==NULL)
                  {
                      even=head;
                      e=head;
                  }
                  else
                  {
                      e->next=head;
                      e=e->next;
                  }
              }
              head=head->next;
              
            }
                if(even!=NULL)
    {e->next=odd;}
    if(even==NULL)
    {return odd;}
    if(odd!=NULL)
    o->next=NULL;
    return even;
        }

};
