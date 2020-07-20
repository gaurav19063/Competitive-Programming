#include<iostream>
#include<unordered_map>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    unordered_map<int,int> umap;
	    while(k--)
	    {
	        int s,t;
	        cin>>s>>t;
	        umap[s]++;
	    }
	    int count=0;
	    for(auto x: umap)
	    {
	       // cout<<x.first<<" "<<x.second<<endl;
	        count+=x.second;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
