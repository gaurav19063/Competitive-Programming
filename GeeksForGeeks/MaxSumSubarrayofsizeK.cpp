#include<iostream>
#include<climits>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int sum[n]={0};
	    sum[0]=a[0];
	    int maxval=INT_MIN;
	    for(int i=1;i<n;i++)
	    {
	        if(i<k)
	        {
	            sum[i]=sum[i-1]+a[i];

	        }
	        else
	        {
	            sum[i]=sum[i-1]+a[i]-a[i-k];

	        }

	          maxval=max(maxval,sum[i]);
	    }
	    cout<<maxval<<endl;

	}
	return 0;
}
