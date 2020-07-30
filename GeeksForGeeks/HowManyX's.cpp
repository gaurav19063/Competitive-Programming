#include<iostream>
using namespace std;
int findNoOfDigits(int n,int d)
{
    int count=0;
    while(n)
    {
        if(d==n%10)
        {
            count++;
        }
        n=n/10;
    }
    return count;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int d;
	    cin>>d;
	    int low,up;
	    cin>>low>>up;
	    int count=0;
	    for(int i=low+1;i<up;i++)
	    {
	        count+=findNoOfDigits(i,d);

	    }
	    cout<<count<<endl;
	}
	return 0;
}
