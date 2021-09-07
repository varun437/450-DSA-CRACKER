Node *merge(Node *a,Node *b)
{
    Node *c=new Node(0);
    Node *temp=c;
    
    while(a!=NULL && b!=NULL)
    {
      if(a->data>b->data)
      {
          temp->bottom = b;
          temp=temp->bottom;
          b=b->bottom;
      }
      else
      {
          temp->bottom = a;
          temp=temp->bottom;
          a=a->bottom;
      }
    
        if(a) 
        {
            temp->bottom=a;
        }
        if(b)
        {
            temp->bottom=b;
        }
    }
    return c->bottom;
}
    
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL)
   return root;
   
   root->next=flatten(root->next);
   root=merge(root,root->next);
   
   return root;
}
