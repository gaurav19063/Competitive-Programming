#include<iostream>
#include<vector>
#include<algorithm>
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
	    vector<string> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    sort(v.begin(),v.end());
	    cout<<v[0]<<" "<<v[n-1]<<endl;
	   //for(auto x: v)
	   //{
	   //    cout<<x<<" ";
	   //}

	}
	return 0;
}
