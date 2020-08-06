#include<iostream>
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
	    int a[n+1];
	    a[0]=0;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	        a[i]+=a[i-1];
	       // cout<<a[i]<<" ";
	    }
	   // cout<<endl;
	    int q;
	    cin>>q;
	    while(q--)
	    {
	        int l,r;
	        cin>>l>>r;
	        cout<<a[r]-a[l-1]<<" ";
	    }
	    cout<<endl;

	}
	return 0;
}
