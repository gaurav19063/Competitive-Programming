
// User function template in C++

// a : given array
// n : size of the array

bool findPartition(int a[], int n) {
    // code here
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=a[i];
    if(sum%2!=0)
    return 0;
    else sum=sum/2;
    // int dp[sum+1][n+1];
    vector<vector<int>> dp(sum+1,vector<int>(n+1,0));
    // memset(dp,0,sizeof(dp));
    for(int i=0;i<=sum;i++)
    {
        // cout<<i<<" ";
        for(int j=0;j<=n;j++)
       {
        if(i==0)
        dp[i][j]=1;
        else if(j==0)
        dp[i][j]=0;
        else if(a[j-1]>i)
        dp[i][j]=dp[i][j-1];
        else
        {

            dp[i][j]=dp[i][j-1] || dp[i-a[j-1]][j-1];
        }
        // cout<<dp[i][j]<<" ";
       }

        // cout<<endl;
    }
    return dp[sum][n];
}
