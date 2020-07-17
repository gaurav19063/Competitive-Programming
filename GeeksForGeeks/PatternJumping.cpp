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
	    int n;
	    cin>>n;
	    if(n==1)
	    cout<<"True"<<endl;
	    else
	    {
	        double x=log2(n);
	        if(x-int(x)>0)
	        cout<<"False"<<endl;
	        else
	        cout<<"True"<<endl;
	    }
	   // cout<<"False"<<endl;
	}
	return 0;
}
