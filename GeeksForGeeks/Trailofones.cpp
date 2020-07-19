#include<iostream>
#include<cmath>
using namespace std;

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;

	    int a=1;
	    int b=1;
	    for(int i=2;i<=n+2;i++)
	    {
	        int temp=a+b;
	        a=b;
	        b=temp;
	    }
	   // cout<<b<<endl;
	    cout<<int(pow(2,n))-a<<endl;

	}
	return 0;
}
