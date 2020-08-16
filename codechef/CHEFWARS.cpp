#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        while(n>0&&m>0)
        {
            n-=m;
            m=m/2;
        }
        cout<<(n>0?0:1)<<endl;
    }
}
