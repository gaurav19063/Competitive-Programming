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
	    unordered_map<string,int> umap;
	    string s;
	   // cin>>s;
	    while(n--)
	    {
	        cin>>s;
	        umap[s]++;

	    }
	    int count=0;
	    for(auto x:umap)
	    {
	        if(x.second==2)
	        count++;
	    }
	    cout<<count<<endl;

	}
	return 0;
}
