#include<iostream>
using namespace std;
bool isPerfect(long long int n)
{
    long long int sum=0;
    for(long long int i=2;i*i<=n;i++)
    {
        // cout<<sum<<endl;
        if(n%i==0)
        {
            if(n/i==i)
            sum+=i;
            else
            {
                sum+=i+n/i;
            }
            // cout<<sum<<" "<<i<<endl;

        }
        // cout<<sum<<endl;
          if(sum>n)
        return false;

    }
    // cout<<sum<<endl;
    return sum+1==n;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    cout<<isPerfect(n)<<endl;
	}
	return 0;
}
