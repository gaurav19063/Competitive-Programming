#include<iostream>

using namespace std;
int findProperDivisorSum(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
       if(n%i==0)
       {
        //   cout<<i<<" ";
           sum+=i;
       }
    }
    // cout<<sum<<endl;
    return sum;
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
	    if(findProperDivisorSum(n)==m&&findProperDivisorSum(m)==n)
	    {
	        cout<<1<<endl;

	    }
	    else
	    cout<<0<<endl;
	}
	return 0;
}
