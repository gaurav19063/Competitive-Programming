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
	    int a[n];
	    for(int i=0;i<n;i++)

	      cin>>a[i];

	    int maxval=0;
	    for(int i=n-1;i>=0;i--)
	    {
	       if(i==n-1)
	       {
	           maxval=a[i];
	       a[i]=-1;


	       }
	       else
	       {
	          int temp=maxval;
	           maxval=max(maxval,a[i]);
	            a[i]=temp;
	       }


	    }
	    for(auto x:a)
	       cout<<x<<" ";
	    cout<<endl;
	}
	return 0;
}
