#include<iostream>
using namespace std;
void sortArray(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        int s=i-k;
        if(s<0)
        s=0;
        for(int j=i;j>s;j--)
        {
            if(a[j]<a[j-1])
            swap(a[j],a[j-1]);
        }
    }
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>a[i];
	    }
	    sortArray(a,n,k);
	    for(auto x: a)
	    cout<<x<<" ";
	    cout<<endl;
	}
	return 0;
}
