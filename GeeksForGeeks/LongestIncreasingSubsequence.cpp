#include<iostream>
using namespace std;
int findLis(int *a,int n)
{
    int dp[n];
    // memset(dp,0,sizeof(dp));
    int maxlis=0;
    for(int i=0;i<n;i++)
    {
        int t=i-1;
        int lis=0;
        while(t>=0)
        {
            if(a[i]>a[t])
            lis=max(dp[t],lis);
            t--;


        }
        dp[i]=lis+1;
        // cout<<dp[i]<<" ";
        maxlis=max(maxlis,dp[i]);
    }
    return maxlis;
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
	    {
	        cin>>a[i];
	    }

	    cout<<findLis(a,n)<<endl;
	}
	return 0;
}
