#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n];
        int e[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        cin>>e[i];
        vector<pair<pair<int ,int>,int >> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(make_pair(e[i],s[i]),i));
        }
        sort(v.begin(),v.end());
        int i=0;
        int endtime;
        for(auto x:v)
        {

            if(i==0)
            {
                endtime=x.first.first;
            cout<<x.second+1<<" ";

            }
            else{
                // cout<<" h";
                if(endtime<x.first.second)
                {
                    cout<<x.second+1<<" ";
                    endtime=x.first.first;
                }
            }

        i++;

        }
        cout<<endl;

            }
}
