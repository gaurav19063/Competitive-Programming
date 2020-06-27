#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
 class comp{
	 public:
	 bool operator()(pair<string,int>p1,pair<string,int>p2)
	 {
		 if(p1.second==p2.second)
		 {
			 return p1.first>p2.first;
		 }
		 else {
			 return p1.second<p2.second;
		 }
	 }
 };
int main() {
	int n,k;
	cin>>n>>k;
	unordered_map<string ,int>umap;
for( int i=0;i<n;i++)
{
	string s;
	cin>>s;
	if(umap.count(s)>0)
	{
		umap[s]++;
	}
	else
	{
		umap.insert(make_pair(s,1));
	}

}
priority_queue<pair<string,int>,vector<pair<string,int>>,comp> pq(umap.begin(),umap.end());
// cout<<umap.size();
for(int i=0;i<k;i++)
{
	pair<string,int> p=pq.top();
	cout<<p.first<<" ";
	pq.pop();
}
	return 0;
}
