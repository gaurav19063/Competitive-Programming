#include <iostream>
#include<vector>
using namespace std;
int countPath(int a[][5],int i,int j,int n,int m,vector<pair<int,int>> v)
{

if(i>=n || j>=m || a[i][j]==1)
return 0;

else if(i==n-1 &&j==m-1)
{ for(auto x:v)
cout<<'('<<x.first<<','<<x.second<<')'<<" ";
cout<<endl;
return 1;
}
else
{
    v.push_back(make_pair(i,j));
     return countPath(a,i+1,j,n,m,v)+countPath(a,i,j+1,n,m,v);
}
}
int main() {
    // cout<<"Hello World!";
    int n,m;
    cin>>n>>m;
    int a[n][5];
    memset(a, 0, sizeof(int)*n*m);
    a[1][2]=1;
    a[2][3]=1;
    a[3][1]=1;
    vector<pair<int,int>> v;
    cout<<countPath(a,0,0, n, m,v);
    cout<<endl;
    for(int i=0;i<n;i++)
    {for(int j=0;j<m;j++)
    cout<<a[i][j]<<" ";

    cout<<endl;}

}
