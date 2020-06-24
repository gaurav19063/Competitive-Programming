#include<iostream>
#include<map>
#include<stack>
#include<vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> v;
	stack<int>  st;
	vector<int> days(n,0);
	for(int i=0;i<n;i++)
	{
		int d;
		cin>>d;
		v.push_back(d);
	}
	st.push(0);
	for(int i=1;i<n;i++)
	{
		if(v[i]<=v[st.top()])
		st.push(i);
		else
		{	while(!st.empty()&&v[st.top()]<v[i]){
			days[st.top()]=i-st.top();
			st.pop();}
			st.push(i);
		}

	}

for(auto x:days)
cout<<x<<" ";
	return 0;
}
