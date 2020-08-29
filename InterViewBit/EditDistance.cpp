int Solution::minDistance(string A, string B) {
    int n=A.size();
    int m=B.size();
    int a[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0)
            a[i][j]=j;
            else if(j==0)
            a[i][j]=i;
            else if(A[i-1]==B[j-1])
            a[i][j]=a[i-1][j-1];
            else a[i][j]=min(min(a[i-1][j],a[i][j-1]),a[i-1][j-1])+1;
        }
    }
    return a[n][m];
}
