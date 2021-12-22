#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,r;
	    cin>>n>>r;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    reverse(arr,arr+r);
	    reverse(arr+r,arr+n);
	    reverse(arr,arr+n);
	    for(int i:arr)
	    cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}
