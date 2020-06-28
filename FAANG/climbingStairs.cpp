#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin>>n;
	// vector<int>v(n);
	int count;
	int a=1,b=2;

	if(n==1)
	{
		cout<<1;
		return 0;
	}
	else if(n==2)
	{ cout<<2;
		return 0;
	}

	for(int i=3;i<=n;i++)
	{
		count=a+b;
		a=b;
		b=count;

	}
	cout<<count;
	return 0;
}
