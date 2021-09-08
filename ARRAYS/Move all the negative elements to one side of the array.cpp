#include<bits/stdc++.h>
using namespace std;

void find(int arr[], int n)
{ int i,j=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			if(i!=j)
      			swap(arr[i],arr[j]);	
			j++;	
		}

	}
for(i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}	 

int main() 
{
	int arr[] = {-2,5,-9,7,-1,6,2,-3,-8,1};
	int n = sizeof(arr) / sizeof(arr[0]); 
	find(arr,n);
	return 0;
}
