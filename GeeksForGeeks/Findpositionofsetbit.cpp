#include<iostream>
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
	    int flag=0;
	    int ind=0;
	    while(n)
	    {

	        if(n&1>0)
	        {
	            flag++;

	        }
	       n=n>>1;
	        ind++;
	    }
	    flag==1?(cout<<ind):(cout<<-1);
	        cout<<endl;


	}
	return 0;
}
