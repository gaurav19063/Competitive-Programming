#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,a1,b1,a2,b2;
    cin>>x1>>y1>>x2>>y2>>a1>>b1>>a2>>b2;
    if(x1>=a2 || y1>=b2 ||x2<=a1||y2<=b1)
    cout<<0;
    else
    cout<<1;
}
