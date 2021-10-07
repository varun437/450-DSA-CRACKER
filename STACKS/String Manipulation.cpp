class Solution{
    public:
    int removeConsecutiveSame(vector <string> v) 
    { 
        stack<string> st; 
        for (int i=0; i<v.size(); i++) 
        { 
     
            if (st.empty()) 
                st.push(v[i]); 
            else
            { 
                string str = st.top(); 
                if (str.compare(v[i]) == 0) 
                    st.pop(); 
      
                else
                    st.push(v[i]); 
            } 
        }
        return st.size(); 
    } 
};
