#include <iostream>
#include<algorithm>
using namespace std;
pair<int,int> p[100005];
int a[100005];
#define wh(x) while(x--)
#define f(i,s,n) for(int i=s;i<n;i++)
#define ff first
#define ss second
int main() {
    ios_base::sync_with_stdio(false);
	  cin.tie(NULL);
    int t;
    cin>>t;
    f(tc,0,t)
    {
        int n,x;
        cin>>n>>x;
        f(i,0,n)
        {
           cin>>a[i];
           p[i].ff=(a[i]-1)/x;
           p[i].ss=i;

        }
        sort(p,p+n);
        cout<<"Case #"<<tc+1<<": ";
        f(i,0,n)
        cout<<p[i].second+1<<" ";
        cout<<endl;
    }
}
