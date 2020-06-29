#include<iostream>
#include<vector>
using namespace std;
int findMaxTheft(vector<int> v,int n)
{
	if(n==0)
	return 0;
	vector<int> vt;
	int max1=0;
	for(int i=0;i<n;i++)
	{
		if(i==0)
		vt.push_back(v[0]);
		else if(i==1)
		vt.push_back(max(v[0],v[1]));
		else{
			vt.push_back(max(vt[i-1],v[i]+vt[i-2]));
		}

	}
	return  vt.back();
}
int main() {
	int t;
	cin>>t;

	while(t--)
	{ vector<int> v;
	int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int d;
			cin>>d;
			v.push_back(d);

		}
		cout<<findMaxTheft(v,n)<<endl;
	}
	return 0;
}
