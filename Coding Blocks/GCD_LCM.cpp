#include <iostream>
using namespace std;
int gcd(int n,int m)
{
    if(m==0)
    return n;
    else
    return gcd(m,n%m);
}
int lcm(int n,int m)
{
    return n*m/gcd(n,m);
}
int main() {
    // cout<<"Hello World!";
    cout<<gcd(12,20);
    cout<<endl;
    cout<<lcm(12,20);
}
