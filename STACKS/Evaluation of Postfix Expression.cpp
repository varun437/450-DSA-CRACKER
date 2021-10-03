class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
       int n=S.length();
        stack<int> st;
        for(int i=0; i<n; i++)
        {
            if(S[i]>='0' && S[i]<='9')
            {
                st.push(S[i]-'0');
            }
            else
            {
                if(S[i]=='*')
                {
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(b*a);
                }
                else if(S[i]=='/')
                {
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(b/a);
                }
                else if(S[i]=='+')
                {
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(b+a);
                }
                else if(S[i]=='-')
                {
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.pop();
                    st.push(b-a);
                }
            }
        }
        return st.top();
    }
};
