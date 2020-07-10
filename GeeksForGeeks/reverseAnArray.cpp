#include<iostream>
#include<algorithm>
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
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];

	    }
	   reverse(a,a+n);
	    for(auto x: a)

	    {
	        cout<<x<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
