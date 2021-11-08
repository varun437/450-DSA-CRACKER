queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    queue<int> qq;
    int i;
    for(i=0;i<k;i++)
    {
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty())
    {
        qq.push(s.top());
        s.pop();
    }
    
    while(!q.empty())
    {
        qq.push(q.front());
        q.pop();
    }
    
    return qq;
    
}
