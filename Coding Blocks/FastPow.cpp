#include <iostream>
using namespace std;
int fastpow(int a,int n)
{
    if(n==0)
    return 1;

   else if(n&1)
     return a*fastpow(a,n/2)*fastpow(a,n/2);
    else  return fastpow(a,n/2)*fastpow(a,n/2);
}
int main() {
    // cout<<"Hello World!";
    int a=2,n=6;
    cout<<fastpow(a,n);
}
