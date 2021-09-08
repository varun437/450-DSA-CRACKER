#include<bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int n)
{
    int start=0,end=n-1,temp,i;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
	for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}	 

int main() 
{
	int arr[] = {99,88,77,66,55,44,33,22,11};
	int n = sizeof(arr) / sizeof(arr[0]); 
	rvereseArray(arr,n);
	return 0;
}
