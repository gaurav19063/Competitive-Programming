#include<iostream>
using namespace std;
int digitsum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n=n/10;

    }
    return sum;
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
	    while(n>9)
	    {
	        n=digitsum(n);

	    }
	    cout<<n<<endl;

	}
	return 0;
}
