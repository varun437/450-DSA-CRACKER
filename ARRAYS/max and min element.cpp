#include<bits/stdc++.h>
using namespace std;

void find(int arr[], int n)
{
    int min,max,i;

if (n == 1)
  {
	max = arr[0];
	min = arr[0];	 
	cout<<min<<max;
  } 

if (arr[0] > arr[1]) 
  {
	max = arr[0];
	min = arr[1];
  } 
else
  {
	max = arr[1];
	min = arr[0];
  } 

for (i = 2; i<n; i++)
  {
	if (arr[i] > max)	 
	max = arr[i];

	else if (arr[i] < min)	 
	min = arr[i];
  }
cout<<min<<" "<<max;

}	 

int main() 
{
	int arr[] = {99,88,77,66,55,44,33,22,11};
	int n = sizeof(arr) / sizeof(arr[0]); 
	find(arr,n);
	return 0;
}
