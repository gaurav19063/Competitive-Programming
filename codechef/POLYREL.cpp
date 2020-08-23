#include <iostream>
#include<set>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<pair<long int,long int>> s;
        for(int i=0;i<n;i++)
        {
            long int x,y;
            cin>>x>>y;
            s.insert(make_pair(x,y));

        }
       n=s.size();

        // cout<<n<<endl;
        int a[n+1];
        for(int i=0;i<=n;i++)
        {
            if(i<6)
            a[i]=0;
            else
            {
                a[i]=i/2+a[i/2];
            }

            // cout<<a[i]<<" ";

        }
        cout<<n+a[n]<<endl;
    }
}
