int Solution::solve(string A, string B) {
    int n, m;
    n=A.size();
    m=B.size();
    int a[1006][1006];
    // cout<<n<<m;
    // memset(a,0,sizeof(a));
    for(int i=0;i<=n;i++)
    {

        for(int j=0;j<=m;j++)
        {

            if(i==0||j==0)
            a[i][j]=0;
            else a[i][j]=(A[i-1]==B[j-1]?a[i-1][j-1]+1:max(a[i-1][j],a[i][j-1]));

        }
    }

    return a[n][m];
}
