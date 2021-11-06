#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int val;
	    cin>>val;
	    queue<int> q;
	    for(int i=1;i<=val;i++)
	    q.push(i);
	    while(q.size()>1)
	    {
	        int last=q.front();
	        q.pop();
	        q.push(last);
	        q.pop();
	    }
	    cout<<q.front()<<endl;
	}
	return 0;
}
