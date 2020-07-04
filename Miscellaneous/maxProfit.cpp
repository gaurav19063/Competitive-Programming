#include <iostream>
#include<math.h>
using namespace std;
int findMaxProfit(int n)
{
    int ar[n+1]={0};
    ar[0]=0;
    ar[1]=0;
    ar[2]=1;
    ar[3]=2;
    ar[4]=3;
    for(int i=5;i<=n;i++)
    {
        ar[i]=max(i/2+i/3+i/4,ar[int(i/2)]+ar[int(i/3)]+ar[int(i/4)]);
    }
    return ar[n];
}
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    cout<<findMaxProfit( n);
}
