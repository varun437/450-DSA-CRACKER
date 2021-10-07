class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        long long res =0;
        for(int i=1;i<N;i++)
        res  = max(res,arr[i]+arr[i-1]);
        return res;
    }
};
