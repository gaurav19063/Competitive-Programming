#include<iostream>
#include<cstring>
using namespace std;
int NoOfWays(string s1,string s2)
{
    int n=s1.size();
    int m=s2.size();
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=n;i++)
    dp[0][i]=1;
    for(int i=1;i<=m;i++)
    {
        // cout<<i<<endl;
        for(int j=1;j<=n;j++)
        {
          if(s1[j-1]==s2[i-1])
                {
                   dp[i][j]  = dp[i-1][j-1]+dp[i][j-1];
                }

             else   dp[i][j] = dp[i][j-1];
             // cout<<dp[i][j]<<" ";

        }
        // cout<<endl;

    }
    return dp[m][n];
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string st;
	    cin>>st;
	    cout<<NoOfWays(s,st)<<endl;
	}
	return 0;
}
