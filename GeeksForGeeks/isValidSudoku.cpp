#include<iostream>
using namespace std;
bool isValid(int a[][9],int i,int j)
{
    int n=9;
    for(int k=0;k<n;k++)
    {
        // cout<<i<<" "<<k<<" ";
        if(k==i)
        continue;
        if(a[k][j]==a[i][j])
        return false;

    }
    for(int k=0;k<n;k++)
    {
        if(k==j)
        continue;
        if(a[i][k]==a[i][j])
        return false;
    }
    return true;

}
int solvesudoku(int a[][9])
{
    // a[1][3]=-1;
    // cout<<a[0][0];
    int n=9;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            // cout<<i<<" "<<j<<endl;
        if(a[i][j]==0)
        continue;
            if(!isValid(a,i,j))
            return 0;
        }

    }
    return 1;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n=9;
	    int a[n][9];
	    for(int i=0;i<n;i++)
	    {

	        for(int j=0;j<n;j++)
	        {cin>>a[i][j];
	       // cout<<a[i][j]<<" ";
	        }
	       // cout<<endl;
	    }

	  cout<<  solvesudoku(a)<<endl;
	   // cout<<a[1][3];
	}
	return 0;
}
