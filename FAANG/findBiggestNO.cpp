#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(string a,string b)
{   int length=min(a.length(),b.length());

	return a+b>b+a; // This is the crux here
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		vector<string> v;
		cin>>n;
		for(int i=0;i<n;i++)
		{ string s;
		  cin>>s;
		  v.push_back(s);
		}
		sort(v.begin(),v.end(),comp);
		for(int i=0;i<n;i++)
		cout<<v[i];
		cout<<endl;
	}
	return 0;
}
