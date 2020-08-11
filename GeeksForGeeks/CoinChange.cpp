#include<iostream>
using namespace std;
int findWays(int *a,int n,int v)
{


  int dp[v+1][n+1];
  for(int i=0;i<=v;i++)
  {
      for(int j=0;j<=n;j++)
      {
          if(i==0)
          dp[i][j]=1;
          else if(j==0)
          dp[i][j]=0;
          else if(i<a[j-1])
          dp[i][j]=dp[i][j-1];
          else
          {
             dp[i][j]=dp[i-a[j-1]][j]+dp[i][j-1];
          }
      }
  }
  return dp[v][n];

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
	    int v;
	    cin>>v;
	    cout<<findWays(a,n,v)<<endl;
	}
	return 0;
}
