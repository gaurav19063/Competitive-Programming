#include<iostream>
#include<cstring>
using namespace std;
int findCommonSubstringLength(string s1,string s2,int n,int m)
{
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    int maxlen=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i-1]==s2[j-1])
            dp[i][j]=dp[i-1][j-1]+1;
            maxlen=max(maxlen,dp[i][j]);
            // cout<<dp[i][j]<<' ';


        }
        // cout<<endl;
    }
    return maxlen;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    string s1,s2;
	    cin>>s1>>s2;
	    cout<<findCommonSubstringLength(s1,s2,n,m)<<endl;
	}
	return 0;
}
