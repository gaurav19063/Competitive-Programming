#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int j=1;
    for(int i=0;i<n-1;i=i+2)
    {
        a[i]=-1*j;
        a[i+1]=j;
        j++;
    }
    if(n&1)
    a[n-1]=0;
    // else
    // a[n-1]=-1*a[n-1];
    for(auto x:a)
    cout<<x<<" ";
}
