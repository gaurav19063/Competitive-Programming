#include<iostream>
#include<queue>
#include<climits>
using namespace std;
int main() {
	int n;
	cin>>n;
	queue<int > q;
	int d;
	cin>>d;
	q.push(d);
	int maxprofit=INT_MIN;
	while(n-->1)
	{
		cin>>d;
		if(d-q.front()<0)
		{q.pop();
		q.push(d);
		}
		else if(maxprofit<(d-q.front()))
		maxprofit=d-q.front();

	}
	cout<<maxprofit;
	return 0;
}
