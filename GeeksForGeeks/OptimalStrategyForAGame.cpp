#include<iostream>
#include<cstring>
using namespace std;
int findOptimalsum(int* a,int n)
{
    int dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int x=0;x<n;x++)
    {
        for(int y=0;x+y<n;y++)
        {
            int i=y;
            int j=y+x;

            // cout<<i<<" "<<j<<" ";
            if(i==j)
            dp[i][j]=a[i];
            else
            {
            int av=(i+2<n)?dp[i+2][j]:0;
            int c=(j-2>=0)?dp[i][j-2]:0;
            int b=(i+1<n)?dp[i+1][j-1]:0;
            dp[i][j]=max(a[i]+min(av,b),a[j]+min(b,c));
            }

        }

    }
    // for(int i=0;i<1;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    return dp[0][n-1];
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<findOptimalsum(a,n)<<endl;
	}
	return 0;
}
