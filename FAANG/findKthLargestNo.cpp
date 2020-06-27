#include<iostream>
#include<queue>
// #include<vector>
using namespace std;
int findKthLargest(vector<int>v,int n,int k)
{
	priority_queue<int> q(v.begin(),v.end());
	// cout<<q.size()<<' '<<v.size()<<" ";
	while(!q.empty()&&k>1)
	{
		q.pop();
		// cout<<q.size()<<" ";
		k--;
	}
	return q.top();
}

int main() {
	int n,k;
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<n;i++)
	{ int d;
	cin>>d;
		v.push_back(d);
	}
	cout<<findKthLargest(v,n,k);
	return 0;
}
