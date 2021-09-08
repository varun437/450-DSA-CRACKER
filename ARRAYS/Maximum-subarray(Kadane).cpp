#include<bits/stdc++.h>
using namespace std;

void find(int arr[],int n)
{ 
	int i;
	int max_so_far=INT_MIN , max_ending=0;
	for(i=0;i<n;i++)
	{
		max_ending=max_ending+ arr[i];
		if(max_so_far<max_ending)
		max_so_far=max_ending;

		if(max_ending<0)
		max_ending=0;
	}
	cout<<max_so_far;
}	 

int main() 
{ 
	int k;
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    find(arr,n); 
    return 0; 
} 
