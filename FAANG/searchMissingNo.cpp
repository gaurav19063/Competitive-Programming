#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	long long int sum=0;
	int xor1=0;
	int xor2;
	for(int i=1;i<=n;i++)
	{
		xor1 ^=i;
		int d;
		cin>>d;
		if (i==1)
		{xor2=d;
		continue;
		}

		xor2^=d;
	}
	cout<<(xor1^xor2);
	return 0;
}
