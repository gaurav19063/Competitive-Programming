// #include <iostream>
#include<bits/stdc++.h>
using namespace std;
int countBitsFast(int n)
{ int bc=0;
    while(n>0)
    {
        n=n&(n-1);
        bc++;
    }
    return bc;
}
int countBits1(int n)
{
    int bc=0;
    int i=0;
    while(n>0)
    {

       bc+=n&1;
        n=(n>>1);
    }
    return bc;
}
int main() {
    // cout<<"Hello World!";
    cout<<countBitsFast(15)<<endl;
    cout<<countBits1(15);
}
