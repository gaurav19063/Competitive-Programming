#include<iostream>
using namespace std;
int findMaxIncSum(int *a,int n)
{
    int dp[n];
    int sum[n]={0};
    // sum[0]=a[0];

    int maxsum=a[0];
    int maxlen=1;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            sum[i]=a[i];
            dp[i]=1;
            continue;
        }
        int t=i-1;
        int len=0;
        int s=0;
        while(t>=0)
        {
            if(a[i]>a[t])
            {
                // len=max(dp[t],len);
                if(dp[t]>len)
                {
                    len=dp[t];
                    s=sum[t];
                }

            }
            t--;
        }
        dp[i]=len+1;
        sum[i]=s+a[i];

        // cout<<dp[i]<<" "<<sum[i]<<" ";
        // maxsum=max(maxsum,sum[i])
        if(maxlen<dp[i])
        maxsum=sum[i];


    }
    return maxsum;
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
	    cout<<findMaxIncSum(a,n)<<endl;
	}
	return 0;
}
