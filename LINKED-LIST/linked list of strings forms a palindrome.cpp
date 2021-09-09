bool compute(Node* root)
{
   Node *temp=root;
   string res;
   while(temp!=NULL)
   {
       res += temp->data;
       temp=temp->next;
   }
   int i;
   int n=res.size();
   for(i=0;i<n/2;i++)
   {
       if(res[i]!=res[n-1-i])
       return false;
   }
   return true;
   
}
