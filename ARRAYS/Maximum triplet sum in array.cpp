int maxTripletSum(int arr[], int n)
    {
    	// Complete the function
    	int m1=max(arr[0],arr[1]);
    	int m2=min(arr[0],arr[1]);
    	int m3=INT_MIN;
    	for(int i=2;i<n;i++){
    	    if(arr[i]>m1) {
    	        m3=m2;
    	        m2=m1;
    	        m1=arr[i];
    	    }
    	    else if(arr[i]>m2){
    	        m3=m2;
    	        m2=arr[i];
    	    }
    	    else if(arr[i]>m3) m3=arr[i];
    	}
    	return m1+m2+m3;
    }
                                 (OR)

class Solution{
    public:
    int maxTripletSum(int arr[], int n)
    {
        sort(arr,arr+n);
        return arr[n-1]+arr[n-2]+arr[n-3];
    }
};
