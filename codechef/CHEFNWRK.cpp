#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        int count=0;
        int w=0;
        int flag=0;
        int flag2=0;
        for(int i=0;i<n;i++)
        {
            int d;
            cin>>d;
            if(d>k)
            flag2=1;
            if(w+d>k)
            {
                count++;
                w=d;
                flag=i;
            }
            else if(w+d==k)
            {
                count++;
                w=0;
                flag=i;
            }
            else
            {

                w+=d;
            }
        }
        if(w>0)
        count++;

        if(flag2)
        cout<<-1<<endl;
        else cout<<count<<endl;

    }
}
