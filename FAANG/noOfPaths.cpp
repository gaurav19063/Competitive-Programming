#include<iostream>
#include<vector>
using namespace std;
int findNoOfWays(int n,int m)
{
    int a[n][m];
    a[0][0]=1;
    for(int i=0;i<n;i++)
   { for(int j=0;j<m;j++)
    {   if(i==0&&j==0)
        a[i][j]=1;

        else if(i==0)
        a[i][j]=a[i][j-1];
        else if(j==0)
        a[i][j]=a[i-1][j];
        else{
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
        // cout<<a[i][j]<<" ";
    }
    // cout<<endl;
   }
    return a[n-1][m-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<findNoOfWays(n,m)<<endl;
    }
}
