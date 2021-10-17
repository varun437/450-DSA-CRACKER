class Solution
{
  public:
    string reverseEqn (string s)
        {
            string res= "";
            stack<char> st;
            int n = s.size();
            int i=n-1;
            while(i>=0)
            {
                if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
                {
                    while(!st.empty())
                    {
                        res+=st.top();
                        st.pop();
                    }
                    res+=s[i];
                }
                else
                {
                    st.push(s[i]);
                }
                i--;
            }
            while(!st.empty())
            {
                res+=st.top();
                st.pop();
            }
            return res;
        }
};
