//User function template for C++

// X : 1st given string of size m
// Y : 2nd given string of size n
// #include<cstring>
int shortestCommonSupersequence(char* X, char* Y, int m, int n) {
    //code here
    int a[m+1][n+1];
    // mamset(a,0,sizeof(a));
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
            a[i][j]=0;
            else if(X[i-1]==Y[j-1])
            a[i][j]=a[i-1][j-1]+1;
            else a[i][j]=max(a[i-1][j],a[i][j-1]);
        }

    }
    int l=a[m][n];
    if(m>n)
    return m+(n-l);
    else return n+(m-l);
}
