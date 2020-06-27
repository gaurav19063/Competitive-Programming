#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int joinRopeCost(vector<int> v,int n)
{
    priority_queue<int,vector<int>,greater<int>> pq(v.begin(),v.end());
    // cout<<pq.size();
    int cost=0;
    while(pq.size()>1)
    {

        // break;
        int a,b;
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        pq.push(a+b);
        cost=a+b;

    }
    return cost;


}
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    cout<<joinRopeCost(v, n);

}
