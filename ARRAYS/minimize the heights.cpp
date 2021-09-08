#include<bits/stdc++.h>
using namespace std;
 

int main() 
{ 
	int k,i;
    int n,small,big;
	cin>>n;
	int arr[n];
	cout<<"enter the value of k:";
	cin>>k;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);
    small=arr[0]+k;
	big=arr[n-1]-k;
   
   for(i=1;i<n-1;i++)
   {
	   int add=arr[i]+k;
	   int sub=arr[i]-k;
	   if(sub>=small || add<=big)
	   continue;

	   else if(big-sub<add-small)
	   small=sub;

	   else
	   big=add;

   }
	
 cout<<min(big-small,arr[n-1]-arr[0]);
    return 0; 
} 
