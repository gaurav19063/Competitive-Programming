#include<iostream>
using namespace std;
int findsum(int a,int b)
{
    if(abs(b-a)>1)
    return b-a;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                // if(i==j)
                // continue;
                sum+=findsum(a[i],a[j]);

            }
        }
        cout<<sum<<endl;
    }
}
