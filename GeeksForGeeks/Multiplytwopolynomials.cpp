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
	    int n,m;
	    cin>>n>>m;
	    vector<int> v1(n),v2(m);
	    for(int i=n-1;i>=0;i--)
	    cin>>v1[i];
	    for(int i=m-1;i>=0;i--)
	    cin>>v2[i];
	    vector<vector<int>> v;
	    for(int i=0;i<m;i++)
	    {
	        vector<int> temp(n+m,0);
	        for(int j=0;j<n;j++)
	        {
	            temp[j+i]=v2[i]*v1[j];

	        }
	        v.push_back(temp);
	    }
	    vector<int>temp(n+m,0);
	    for(int i=0;i<m+n;i++)
	    {
	       // temp+=temp+v[i];
	        for(int j=0;j<m;j++)
	        {
	            temp[i]+=v[j][i];
	           //cout<<v[i][j]<<" ";
	        }
	       // cout<<temp[i]<<' ';
	       //cout<<endl;
	    }
	    int flag=0;
	    for(auto it=temp.rbegin();it<temp.rend();it++)
	   {
	       if(*it!=0)
	    {
	        flag=1;
	    }
	    if(flag)
	    cout<<*it<<' ';
	   }
	    cout<<endl;

	}
	return 0;
}
