#include<iostream>
#include<climits>
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
	   cin>>a[i];
	   sort(a,a+n);

	   int min1=INT_MAX;
	   for(int i=1;i<n;i++)
	   {
	       min1=min(min1,abs(a[i]-a[i-1]));
	   }
	   cout<<min1<<endl;
	}
	return 0;
}
