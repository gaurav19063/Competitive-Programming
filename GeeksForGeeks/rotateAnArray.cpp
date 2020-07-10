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
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];

	    }
	    rotate(a,a+k,a+n);
	    for(auto x: a)

	    {
	        cout<<x<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
