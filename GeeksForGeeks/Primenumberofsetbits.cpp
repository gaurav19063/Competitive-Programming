#include<iostream>
using namespace std;
bool isPrime(int n)
{
    // cout<<n%3;
    if(n==1)
    return false;
    // if(n==2)
    // return true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
    return false;
    // cout<<n%i<<endl;
    }
     return true;
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
	    int count=0;
	    for(int i=n;i<=m;i++)
	    {
	        int b=__builtin_popcount(i);
	        if(isPrime(b))
	       { count++;
	       // cout<<b<<" ";

	       }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
