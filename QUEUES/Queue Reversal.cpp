queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int> s;
    queue<int> a;
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        a.push(s.top());
        s.pop();
    }
    
    return a;
}
