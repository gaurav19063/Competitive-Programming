#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<floor(tgamma(n+m-1)/(tgamma(n)*tgamma(m)))<<endl;
    }
}
