long long  multiplyTwoLists (Node* l1, Node* l2)
{
      
      long long num1=0,num2=0,mod=1000000007;
  
      while(l1!=NULL || l2!=NULL)
       {
           
           if(l1)
           {
               num1=((num1*10)+l1->data)%mod;
               l1=l1->next;
           }
           if(l2)
           {
               num2=((num2*10)+l2->data)%mod;
               l2=l2->next;
           }
    
        }
        return (num1*num2)%mod;
}
