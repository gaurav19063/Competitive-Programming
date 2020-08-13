#include<iostream>
using namespace std;

int maxPath(int a[100][100],int n)
{
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int x=(j-1>=0)?a[i-1][j-1]:0;
                int y=a[i-1][j];
                int z=(j+1<n)?a[i-1][j+1]:0;
                a[i][j]+=max(x,max(y,z));
            }
        }
        int maxpath=0;
        for(int j=0;j<n;j++)
        maxpath=max(maxpath,a[n-1][j]);
        return maxpath;

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
	    int a[100][100];
	    for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
	    cin>>a[i][j];
	    cout<<maxPath(a,n)<<endl;
	}
	return 0;
}
