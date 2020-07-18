#include<iostream>
#include<climits>
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
	    int max1=INT_MIN;
	    int count=0;
	    while(n)
	    {

	           if(n&1>0){
	            count++;
	        }
	        else
	        {

	            max1=max(max1,count);
	            count=0;
	        }


	        n=n>>1;
	    }
	    max1=max(max1,count);
	    cout<<max1<<endl;
	}
	return 0;
}
