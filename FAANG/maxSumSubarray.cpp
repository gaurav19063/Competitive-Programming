#include<iostream>
#include<climits>
using namespace std;

int main() {

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
		int csum=0;
		int msum=INT_MIN;
		int temp=INT_MIN;
		int flag=1;
		for( int i=0;i<n;i++)
		{
			if(a[i]>temp)
			temp=a[i];
			if(a[i]>=0)
		    flag=0;
			csum+=a[i];
			if(csum<0)
			csum=0;
			if (csum>msum)
			msum=csum;


		}
		if(flag)
		{
	cout<<temp<<endl;
		}
		else
		cout<<msum<<endl;
	}
	return 0;
}
