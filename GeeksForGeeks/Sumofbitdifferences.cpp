#include<iostream>
using namespace std;
int getBitDiff(int a,int b)
{
    int n;
    n=a>b?a:b;
    int count=0;

    while(n)
    {
        // cout<<a<<" "<<b<<endl;
        if((a&1)>0&&(b&1)==0)
        count++;
        else if((a&1)==0&&(b&1)>0)
        count++;
        a=a>>1;
        b=b>>1;
        n=n>>1;
        // cout<<count<<endl;
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
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(i==j)
	            continue;
	            count+=getBitDiff(a[i],a[j]);

	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
