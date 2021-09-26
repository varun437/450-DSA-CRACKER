void cal(
    Node *head, 
    long long unsigned int &power, 
    long long unsigned int &res)
{
    
    if(head == NULL)
    {
        return;
    }
    
    cal(head->next, power, res);
    
    res = (res + ((head->data) * power)) % MOD;
    
    power = (power * 2) % MOD;
}
// Should return decimal equivalent modulo 1000000007 of binary linked list 
long long unsigned int decimalValue(Node *head)
{
   /* int res=0;
    while(head!=NULL)
    {
        res=(res << 1) + head->data;
        head=head->next;
    }
    return res;
    */
      long long unsigned int res = 0;
    long long unsigned int power = 1;
    
    cal(head, power, res);
    
    return res%MOD;
}
