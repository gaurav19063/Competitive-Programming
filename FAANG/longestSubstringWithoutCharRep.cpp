#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int max=0;
        for(int i=0;i<s.size();i++)
        { int ar[26]={0};
        int count=0;
            for(int j=i;j<s.size();j++)
            {
                if(ar[s[j]-'a']==0)
                {
                    count++;
                    ar[s[j]-'a']=1;
                }
                else {
                    break;
                }
            }
            if(count>max)
            max=count;
        }
        cout<<max<<endl;
    }
}
