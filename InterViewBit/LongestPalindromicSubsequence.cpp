int Solution::solve(string A) {

    int n=A.size();
    int a[n][n];
    memset(a,0,sizeof(a));
    int len=0;

    for(int x=0;x<n;x++)
    {
        for(int y=0;y+x<n;y++)
        {
            int i=y;
            int j=x+y;
            // cout<<i<<" "<<j<<" ";
            if(i==j)
            a[i][j]=1;
            else if(i+1==j)
            {
                if(A[i]==A[j])
                a[i][j]=2;
                else a[i][j]=1;

            }
            else if(A[i]==A[j])
            a[i][j]=a[i+1][j-1]+2;
            else a[i][j]=max(a[i][j-1],a[i+1][j]);

        }
    }
    return a[0][n-1];

}
