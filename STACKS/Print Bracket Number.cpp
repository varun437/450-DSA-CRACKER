class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	  
	    
	    vector<int> res;
	    stack<int> st;
	    int n=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]=='(')
	        {
	            n++;
	            st.push(n);
	            res.push_back(n);
	        }
	        else if(S[i]==')')
	        {
	            int it = st.top();
	            st.pop();
	            res.push_back(it);
	            
	        }
	        
	    }
	    return res;
	}
};
