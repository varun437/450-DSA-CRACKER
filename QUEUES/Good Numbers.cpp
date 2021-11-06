#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
    while(t--)
	{
	    int n;
	    cin>>n;
	    deque<string> q;
	    q.push_back("");
	    while(n--)
	    {
	        string t=q.front();
	        q.pop_front();
	        q.push_back(t +'1');
	        q.push_back(t +'2');
	    }
	        cout<<q.front()<<endl;
	}
	return 0;
}
