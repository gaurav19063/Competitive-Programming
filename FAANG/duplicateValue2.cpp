#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool isDuplicate(vector<int>v,int n,int k)
{  unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {


    if(m.count(v[i])>0)
    {
        if(abs(m[v[i]]-i)<=k)
        return true;
        else m[v[i]]=i;

    }
    m.insert(make_pair(v[i],i));
    }
    return false;
}
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    int k;
    cin>>k;
    cout<<(isDuplicate(v,n,k)?"true":"false");
}
