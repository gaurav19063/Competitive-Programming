#include<iostream>
#include<unordered_map>
#include<cmath>
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
        int t=n;
	    unordered_map<int,int> umap;
	    for(int i=2;i*i<=n && n>0;i++)
	    {
	        if(n%i==0)
	        {
	            while(n%i==0&&n>0)
	            {
	                if(umap.count(i)==0)
	                {
	                    umap[i]=1;
	                }
	               else
	               umap[i]++;
                   n=n/i;
	            }
	        }
	    }

	   if(n>1)
	   umap[n]=1;
	   double count=1.0;
	   for(auto x:umap)
	   {
	       //cout<<x.first<<" ";
	       count*=1-1.0/x.first;
	   }
	   cout<<t*count<<endl;
	}
	return 0;
}
