#include<iostream>
#include<cmath>
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
	    cout<<int(n*pow(.5,k-1))<<endl;
	}
	return 0;
}
