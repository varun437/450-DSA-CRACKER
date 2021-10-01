class Solution
{
    public:
    //Function to delete middle element of a stack.
    
     void deleteMid_util(stack<int>&s, int sizeOfStack, int current)
    {
        
        if(s.empty() || current==sizeOfStack)
        return;
        
       int a = s.top();
        s.pop();
        
        deleteMid_util(s,sizeOfStack, current+1);
        
        if(current!=sizeOfStack/2)
        s.push(a);
        
    }
    
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
     deleteMid_util(s,sizeOfStack,0);   
    }
};
