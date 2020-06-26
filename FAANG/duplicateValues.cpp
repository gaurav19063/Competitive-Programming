#include<iostream>
#include<map>
using namespace std;
int main() {
	int n;
	cin>>n;
	map<int,int> m;
	int flag=0;
	while(n--)
	{
		int d;
		cin>>d;
		if(m.count(d)>0)
		{
		flag=1;
		break;}

		m.insert(make_pair(d,0));
	}
	if(flag)
	cout<<"true";
	else
	cout<<"false";
	return 0;
}
