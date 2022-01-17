class Solution{
public:
    long long maxPoint(int N, int K, long long A[], long long B[])
    {
        long long tim=0,s=0;
        for(int i=0;i<N;i++)
        {
            s=(K/A[i])*B[i];
            tim=max(tim,s);
        }
        return tim;
        
    }
};
