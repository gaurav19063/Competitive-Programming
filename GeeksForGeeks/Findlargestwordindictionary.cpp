#include <iostream>
#include<vector>
using namespace std;
int findLCS(string s1,string s2)
{
    int r=s2.size()+1;
    int c=s1.size()+1;
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0||j==0)
            a[i][j]=0;
           else if(s1[j]==s2[i])
            a[i][j]=a[i-1][j-1]+1;
            else
            a[i][j]=max(a[i][j-1],a[i-1][j]);
            // cout<<a[i][j]<<" ";
        }
        // cout<<endl;
    }
    return a[r-1][c-1];
}

int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> v(n);
        for(int i=0;i<n;i++)
        {cin>>v[i];
        }
        string s;
        cin>>s;
        int maxlength=0;
        vector<int > c(n);
        int maxval=0;
        string ans;
        for(int i=0;i<n;i++)
        {
        int l=findLCS(s,v[i]);
        c[i]=l;
        if(l>maxval)
        {
            maxval=l;
            ans=v[i];
        }

        }

        cout<<ans<<endl;

    }
}
