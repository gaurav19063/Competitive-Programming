#include<iostream>
#include<climits>
#include<map>
using namespace std;
long long int digitSqure(long long int n)
{
	long long int sq=0;
	while(n)
	{
		int digit=n%10;
		n=n/10;
sq+=digit*digit;
	}
	return sq;
}
int main() {
	long long int n;
	cin>>n;
	map<int,int> m;
	long long int t=n;
	bool flag=1;
	while(n!=1)
	{ m.insert(make_pair(n,0));
		n=digitSqure(n);
		// cout<<n<<" ";
		if(m.count(n)>0)
		{
			flag=0;
			break;
		}


	}
	flag?cout<<"true":cout<<"false";
	return 0;
}
