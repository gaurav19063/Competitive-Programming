#include<iostream>
using namespace std;
int main()
 {
	//code4
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;

	    int a[n+1];
	    a[1]=1;
	    a[0]=0;

	    for(int i=2;i<=n;i++)
	    {
	        a[i]=i*i+a[i-1];
	    }
	    cout<<a[n]<<endl;
	    	}
	return 0;
}
