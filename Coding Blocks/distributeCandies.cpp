#include<iostream>
#include<set>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	set<int> s;
	for( int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		s.insert(d);
	}
	int setcount=s.size();
	cout<<min(setcount,n/2);
	return 0;
}
