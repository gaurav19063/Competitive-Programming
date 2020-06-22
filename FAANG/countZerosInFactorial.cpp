#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int count=0,k=5;
    while(k<=n)
    {
count+=n/k;
// cout<<count<<" ";
k*=5;
    }
cout<<count;
}
