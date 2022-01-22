class Solution{   
public:
    long long distance(int arr[], int n) {
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[arr[i]-1]=i;
        }
        long long sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=(abs(a[i]-a[i+1]));
        }
        return sum;
    }
};
