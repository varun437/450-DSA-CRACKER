class Solution
{
  public:
    int sumOfMinAbsDifferences(int arr[], int n)
    {   
                int sum=0; sort(arr,arr+n);
        for(int i=0;i<n;i++){
        
        if(i==0)
        sum+=abs(arr[0]-arr[1]);
        
        else if(i==n-1)
        sum+=abs(arr[n-1]-arr[n-2]);
        
        else{
            int a=abs(arr[i]-arr[i+1]);
            int b=abs(arr[i]-arr[i-1]);
            sum+=min(a,b);
            
        }
        
        
        }
        return sum;
    }
};
