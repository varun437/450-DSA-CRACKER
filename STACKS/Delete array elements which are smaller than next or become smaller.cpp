vector<int> deleteElement(int arr[],int n,int k)
{
    stack<int> st;
    st.push(arr[0]);
    int count=0;
    for(int i =1;i<n;i++)
    {
        while(!st.empty() && st.top()<arr[i] && count<k)
         {
             count++;
             st.pop();
         }
         st.push(arr[i]);
    }
    
    int m = st.size();
    vector<int> t(m);
    while(!st.empty())
    {
        t[--m]=st.top();
        st.pop();
    }
     return t;
}
