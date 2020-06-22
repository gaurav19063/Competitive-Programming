#include <bits/stdc++.h>
using namespace std;
int findMinDistance(vector<string> &a,string st,string st1)
{
  int i1=-1,i2=-1;
  int md=-1;
for(int i;i<a.size();i++)
{
    if(a[i]==st&&i1==-1)
    {
        i1=i;
        if(i2!=-1)
        md=abs(i2-i1);
    }
    else if(a[i]==st1&&i2==-1)
    {
        i2=i;
        if(i1!=-1)
        md=abs(i2-i1);

    }
    else if(a[i]==st)
    {
        i1=i;
        md=min(md,abs(i1-i2));

    }
    else if(a[i]==st1)
    {
        i2=i;
        md=min(md,abs(i1-i2));
    }
}

    return md;
}
int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;
        v.push_back(st);
    }
    string st,st1;
    cin>>st>>st1;
    cout<<findMinDistance(v,st,st1);
return 0;
}
