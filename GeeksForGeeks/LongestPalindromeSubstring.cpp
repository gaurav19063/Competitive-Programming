
// User function template for C++

// A : given string
// return the required string
string longestPalindrome(string s) {
    // code here
    int l=s.size();
    bool dp[l][l];
    memset(dp,0,sizeof(dp));

    int p=-1,q=-1;
    for(int j=0;j<l;j++)
    {
        int m=-1,n=-1;
        for(int i=0;i+j<l;i++)
        {
            int x=i;
            int y=i+j;

            if(x==y)
            dp[x][y]=1;
            else if(s[x]==s[y]&&x==y-1)
            dp[x][y]=1;
            else if(s[x]==s[y]&&dp[x+1][y-1])
            dp[x][y]=1;
            if(m==-1&&dp[x][y])
            {
                m=x;
                n=y;

            }



        }
        if(m!=-1)
        {
            p=m;
            q=n;
            // cout<<m<<" "<<n<<" "<<dp[m][n]<<endl;
        }

        // cout<<i<<" "<<i+j<<endl;
    }



    string st;
    for(int i=p;i<=q;i++)
    st.push_back(s[i]);
    return st;
}
