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
	    n--;
	    long int snum=0;
	    int i=0;
	    while(n>0)
	    {
	        snum+=(n%6)*pow(10,i++);
	        n/=6;
	    }
	    cout<<snum<<endl;
	}
	return 0;
}
