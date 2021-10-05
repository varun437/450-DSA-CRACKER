class Solution {
  public:
    int findMaxLen(string s) {
    
    stack<int> st;
    st.push(-1);
    int result=0;
    for(int i=0;i<st.size();i++)
    {
        if(s[i]=='(')
        st.push(i);
        
        else
        {
            st.pop();
            if(st.empty())
            st.push(i);
            else
            result = max(result,i-st.top());
        }
        
    }
    
    return result;
    }
};
