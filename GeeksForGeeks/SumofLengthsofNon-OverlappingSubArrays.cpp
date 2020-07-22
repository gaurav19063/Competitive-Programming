#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int k;
        cin>>k;
        int count=0,flag=0;
        int majorcount=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]>k)
            {
                if(flag)
                majorcount+=count;
                flag=0;
                count=0;
            }
            else if(v[i]==k)
            { flag=1;
                count++;
            }
            else
            count++;
            // cout<<majorcount<<" "<<i<<endl;

        }
        if(flag)
        majorcount+=count;
        cout<<majorcount<<endl;
    }

}
