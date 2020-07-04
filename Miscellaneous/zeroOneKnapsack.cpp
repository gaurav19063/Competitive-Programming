#include <iostream>
#include<vector>
using namespace std;
int zoKnapsack(vector<int> w,vector<int> v,int W,int n)
{
int a[n+1][W+1];
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=W;j++)
    {
        if(i==0||j==0)
        a[i][j]=0;

        else if(j<w[i])
        a[i][j]=a[i-1][j];
        else
        {
            a[i][j]=max(a[i-1][j],a[i-1][j-w[i]]+v[i]);
        }

    }
}
// for(int i=0;i<=W;i++)
// cout<<i<<" ";
// cout<<endl;
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=W;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
return a[n][W];
}
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    int W;
    cin>>W;
    vector<int> v(n+1,0),w(n+1,0);
    for(int i=1;i<=n;i++)
    {
    cin>>w[i];
    // cout<<w[i];
    }
     for(int i=1;i<=n;i++)
    {
    cin>>v[i];
    // cout<<v[i];
    }

    cout<<zoKnapsack(w,v,W,n);
}
