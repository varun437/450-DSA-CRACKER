bool pairWiseConsecutive(stack<int> s)
{
    stack<int> st;
    int stsize=0;
   while(!s.empty())
   {
       st.push(s.top());
       s.pop();
       stsize++;
   }
   while(stsize>1)
   {
       int a=st.top();
       st.pop();
       int b=st.top();
       st.pop();
       if(abs(a-b)!=1)
       return false;
       s.push(a);
       s.push(b);
       stsize--;
       stsize--;
   }
   if(st.size()==1)
   s.push(st.top());
   return true;
}
