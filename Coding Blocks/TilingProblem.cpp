#include <iostream>
using namespace std;
int noOfWaysTilling(int l)
{
    // cout<<l<<endl;
    if(l==0)
    return 1;
    else if(l<0)
    return 0;
    else
    return noOfWaysTilling(l-1)+noOfWaysTilling(l-4);
}
int main() {
    // cout<<"Hello World!";
 int length=4;
    cout<<noOfWaysTilling(length);
}
