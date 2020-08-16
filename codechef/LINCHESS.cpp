#include <iostream>
#include<climits>
using namespace std;
int solve(int pi,int k)
{
    int index=pi;
    int moves=0;
    while(index<k)
    {
        index+=pi;
        moves++;
    }
    return (index==k)?moves:-1;
}

int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int moves=INT_MAX;
        int val;
        int flag=0;
        while(n--)
        {
            int pi;
            cin>>pi;
            int m=solve(pi,k);
            if(m!=-1)
            {
            // moves=min(moves,m);
            if(moves>m)
            {
                moves=m;
                val=pi;
            }


            flag=1;
            }

        }
        cout<<(flag?val:-1)<<endl;

    }
}
