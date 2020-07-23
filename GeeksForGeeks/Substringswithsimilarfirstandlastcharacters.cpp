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
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;

	    unordered_map<char,int> umap;
	    for(auto x: s)
	    {
	        umap[x]++;
	    }
	    int count=s.size();
	    for(auto x:umap)
	    {
	       count+=(x.second)*(x.second+1)/2-x.second;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
