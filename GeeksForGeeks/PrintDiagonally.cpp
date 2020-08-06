#include<iostream>
#include<map>
#include<vector>
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
	    int a[n][n];
	    map<int,vector<int>> umap;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	       { int d;
	         cin>>d;
	           umap[i+j].push_back(d);
	       }
	    }

	    for(auto x:umap)
	    {
	        for(auto y:x.second)
	    cout<<y<<" ";

	    }
	    cout<<endl;

	}
	return 0;
}
