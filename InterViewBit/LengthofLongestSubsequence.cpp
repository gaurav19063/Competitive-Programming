int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    if(n==0)
    return 0;
    vector<int> left(n,1);
    vector<int> right(n,1);

    for(int i=1;i<n;i++)
    {
        int maxlen=0;
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            maxlen=max(maxlen,left[j]);
        }
        left[i]=maxlen+1;
    }
    for(int i=n-2;i>=0;i--)
    {

        int maxlen=0;
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            maxlen=max(maxlen,right[j]);

        }
        right[i]=maxlen+1;
    }
    int maxval=0;
    for(int i=0;i<n;i++)
    {
        maxval=max(maxval,left[i]+right[i]-1);
    }
    return maxval;
}
