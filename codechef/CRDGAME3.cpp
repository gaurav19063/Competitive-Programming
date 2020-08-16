#include <iostream>
using namespace std;
int findMinDidits(int n)
{
    if(n%9==0)
    return n/9;
    return n/9+1;
}
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int d1=findMinDidits(n);
        int d2=findMinDidits(m);
        if(d1==d2||d1>d2)
        cout<<1<<" "<<d2<<endl;
        else
        cout<<0<<" "<<d1<<endl;
    }
}
