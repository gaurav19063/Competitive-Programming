#include<iostream>
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
	    vector<int> v;
	    int d=n;
	   // v.push_back(d);

	    while(d>0)
	    {

	        v.push_back(d);
	         d-=5;
	    }
	    while(d!=n)
	    {
	        v.push_back(d);
	        d+=5;
	    }
	    v.push_back(d);

	    for(auto c:v)
	    cout<<c<< " ";
	    cout<<endl;
	}
	return 0;
}
