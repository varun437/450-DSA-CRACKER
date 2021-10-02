
#include<bits/stdc++.h>
using namespace std; 


bool isValid(string s) 
{
        
    stack<int> st;
    
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='0')
            st.push(s[i]);


        else if(st.empty())
            return false;


        else
            st.pop();
    }

    if(st.empty())
        return true;
    

    return false;
}


int32_t main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		string s;
		cin >> s;

		if(isValid(s))
			cout << "yes\n";
		else
			cout << "no\n";
	}

    return 0;
 
} 
