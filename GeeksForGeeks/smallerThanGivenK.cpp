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
	    int k;cin>>k;
	    cout<<upper_bound(a,a+n,k)-a<<endl;
	}
	return 0;
}
