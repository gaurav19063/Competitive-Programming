#include<iostream>
#include<vector>
using namespace std;
bool isPrime(long long int n)
{
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
   return true;

}
long long int maxim(long long int a,long long int b)
{
    return a>b?a:b;
}
long long int findGreatestPrimeDevisor(long long int n)
{
    vector<long long int> v;
    long long int gprime=1;
    for(long long int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            // if(n%i=i)
            // v.push(i);
            // else
            // v.push(i,n/i);
            // if(n%i==i&&isPrime(i))
            // {
            //   gprime=max(gprime,i);
            // }

            if(isPrime(i))
            gprime=maxim(gprime,i);
            // cout<<i<<" "<<gprime<<endl;
            if(isPrime(n/i))
            gprime=maxim(gprime,n/i);
        }
    }
    // for(int i<)
    return gprime;
}
int main()
 {
	//code
// 	cout<<isPrime(7)<<endl;
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    cout<<findGreatestPrimeDevisor(n)<<endl;
	}

	return 0;
}
