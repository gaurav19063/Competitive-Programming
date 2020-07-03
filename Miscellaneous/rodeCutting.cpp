#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int findMaxVal(vector<int> price,int n)
{
    vector<int> val(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int max1=INT_MIN;
        for(int j=1;j<i;j++)
        {
            max1=max(max1,price[j]+price[i-j]);
        }
        val[i]=max(max1,price[i]);

    }
    return val[n];
}
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    vector<int > price(n+1);
    for(int i=1;i<=n;i++)
    {cin>>price[i];
    }
    cout<<endl;
    cout<<findMaxVal(price,n);
}
