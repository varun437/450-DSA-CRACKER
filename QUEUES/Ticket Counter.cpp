#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a,b;
	deque<int> q;
	while(t--)
	{
	cin>>a;
	cin>>b;
	
	for(int x=1;x<=a;x++)
	q.push_back(x);
	
	while(q.size()>1)
	{
	    for(int i=1;i<=b&&q.size()>1;i++)
	    q.pop_front();
	    
	    for(int j=1;j<=b&&q.size()>1;j++)
	    q.pop_back();
	}
	cout<<q.front()<<endl;
	q.pop_front();
	
	}
	return 0;
}
