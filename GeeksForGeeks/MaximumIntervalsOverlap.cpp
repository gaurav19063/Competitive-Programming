#include<iostream>
#include<climits>
#include<vector>
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
	    vector<int > a(n);
	    vector<int> d(n);
	    int maxval=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>d[i];
	        maxval=max(maxval,d[i]);
	    }
	    int b[100001]={0};
	    for(int i=0;i<n;i++)
	    {
	        for(int t=a[i];t<=d[i];t++)
	        {
	            b[t]++;
	        }
	    }
	    int maxval2=INT_MIN;
	    int t=0;
	    for(int i=0;i<=maxval;i++)
	    {
	       // maxval2=max(maxval2,x);
	       if(b[i]>maxval2)
	       {
	       maxval2=b[i];
	       t=i;
	       }


	    }
	    cout<<maxval2<<" "<<t<<endl;

	}
	return 0;
}
