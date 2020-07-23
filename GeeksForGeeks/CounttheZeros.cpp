#include<iostream>
#include<vector>
using namespace std;
int findIndex(vector<int>&v,int i,int j)
{
    if(i<j)
    {

        int mid=(i+j)/2;
        // cout<<mid<<endl;
        if(v[mid]==1&&v[mid+1]==0)
        return mid;
        else{
            if(v[mid]==1)
            // i=mid+1;
             return findIndex(v,mid+1,j);
            else
           return findIndex(v,i,mid-1);
            // j=mid-1;
        }
        return -1;
    }
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
	    vector<int > v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    if(v[0]==0)
	    cout<<v.size()<<endl;
	    else if(v[n-1]==1)
	    cout<<0<<endl;
	    else{
	        int ind=findIndex(v,0,n-1);
	       // cout<<ind<<" ";
	        cout<<v.size()-ind-1<<endl;
	    }
	}
	return 0;
}
