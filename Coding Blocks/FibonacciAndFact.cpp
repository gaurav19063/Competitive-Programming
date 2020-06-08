#include <iostream>
using namespace std;
int fib(int n)
{
    if(n==1 ||n==0)
    return n;
    else return fib(n-1)+fib(n-2);
}
int fact(int i)
{
    if(i==0||i==1)
    return i;
    else return i*fact(i-1);
}
int main() {
    // cout<<"Hello World!";
    cout<<fib(5);
    cout<<endl<<fact(5);
}
