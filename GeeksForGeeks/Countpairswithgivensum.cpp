#include<iostream>
#include<map>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	multimap<int,int> umap;

	    int n,k;
	    cin>>n>>k;
	    while(n--)
	    {
	        int d;
	        cin>>d;
	        umap.insert(make_pair(d,1));
	       // umap[d]=1;
	    }
	    int count=0;
	    for(auto x:umap)
	    {
	        if(umap.count(k-x.first)>0&&x.first==k-x.first)
	         count+=umap.count(k-x.first)-1;
	        else if(umap.count(k-x.first)>0)
	        count+=umap.count(k-x.first);
	    }
	    cout<<count/2<<endl;
	}

	return 0;
}
