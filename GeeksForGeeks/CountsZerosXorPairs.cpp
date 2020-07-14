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

	    	unordered_map <int,int> umap;
	    	int n;
	    	cin>>n;
	    	for(int i=0;i<n;i++)
	    	{
	    	    int d;
	    	    cin>>d;
	    	    if(umap.count(d)==0)
	    	    umap[d]=1;
	    	    else
	    	    umap[d]+=1;
	    	}
	    	int count=0;
	    	for (auto x:umap)
	    	{
	    	  //  cout<<x.first<<" "<<x.second<<" ";
	    	    if(x.second>1)
	    	    count+=(x.second)*(x.second-1)/2;

	    	}
	    	cout<<count<<endl;

	}


	return 0;
}
