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
	    vector<int> v(n*n);
	    for(int i=0;i<n*n;i++)
	    cin>>v[i];
	    sort(v.begin(),v.end());
	    for(auto x:v)
	    cout<<x<<" ";
	    cout<<endl;


	}
	return 0;
}
