#include<bits/stdc++.h>
using namespace std;

void swaps(int a[],int low,int end)
{
	int i,j;
	for(i=low,j=end;i<j;i++,j--)
	{
		int temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}

}


void find(int arr[],int k,int n)
{ 
	int i;
		swaps(arr,n-k,n-1);
        swaps(arr,0,n-k-1);
	    swaps(arr,0,n-1);

for(i=0;i<n;i++)
cout<<arr[i]<<" ";

}	 

int main() 
{ 
	int k;
    int arr[] = {1,2,3,4,5,6,7}; 
    int n = sizeof(arr) / sizeof(arr[0]);
	cin>>k; 
    find(arr,k,n); 
    return 0; 
} 
