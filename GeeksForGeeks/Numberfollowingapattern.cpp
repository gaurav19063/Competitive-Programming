#include <iostream>
#include<vector>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.size();
        int a[l]={0};
        if(s[l-1]=='D')
        a[l-1]=1;
        for(int i=l-2;i>=0;i--)
        {
            if(s[i]=='D')
            a[i]=a[i+1]+1;

        }
        // for(int i=0;i<l;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        int count=0;
        vector<char> v;
        for(int i=0;i<l;i++)
        {

            if(s[i]=='D')
            {
                int ct=a[i]+1;
                i+=a[i];
                count+=ct;
               int  j=0;
                while(ct--)
                {
                    v.push_back('0'+count-j);
                    j++;
                }

            }


            if(i==0&&s[i]=='I')
            {
                v.push_back('0'+(++count));

            }
            if(i==l-1&&s[i]=='I')
            {
                v.push_back('0'+(++count));
            }
            else if(s[i]=='I'&&s[i+1]=='I')
            {
                v.push_back('0'+(++count));
            }

        }

        for(auto x:v)
        cout<<x;
        cout<<endl;
    }
}
