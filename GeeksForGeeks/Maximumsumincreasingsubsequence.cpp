#include<iostream>
using namespace std;
int findMaxIncSum(int *a,int n)
{

    int sum[n]={0};
    int maxsum=a[0];

    for(int i=0;i<n;i++)
    {
        int t=i-1;

        int s=0;
        while(t>=0)
        {
            if(a[i]>a[t])
            {
               s=max(s,sum[t]);
            }
            t--;
        }

        sum[i]=s+a[i];
        maxsum=max(maxsum,sum[i]);


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
