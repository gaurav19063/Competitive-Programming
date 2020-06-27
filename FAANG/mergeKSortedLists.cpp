#include <iostream>
#include<vector>
#include<queue>
using namespace std;
class comp{
    public:
    bool operator()(pair<int,vector<int>> p1,pair<int,vector<int>> p2)
    {
        return p1.first<p2.first;
    }
};
vector<int> merge(pair<int,vector<int>>p1,pair<int,vector<int>>p2,vector<int> &vt)
{
  int l=min(p1.first,p2.first);
//   vector<int> vt;
  int i=0;
  int j=0;
  for(;i<p1.first&&j<p2.first;)
  {

      if(p1.second[i]<p2.second[j])
      {
          vt.push_back(p1.second[i]);
          i++;

      }
      else
      {
          vt.push_back(p2.second[j]);
          j++;

      }
  }
  while(i<p1.first)
  {
      vt.push_back(p1.second[i]);
      i++;
  }
  while(j<p2.first)
  {
      vt.push_back(p2.second[j]);
      j++;
  }
  return vt;
}
int main() {
    // cout<<"Hello World!";
    int n,k;
    cin>>n>>k;
    priority_queue<pair<int,vector<int>>,vector<pair<int,vector<int>>>,comp> pq;
    while(n--)
    {
        vector<int> v;
        for(int i=0;i<k;i++)
        {
            int d;
            cin>>d;
            v.push_back(d);
        }
        pq.push(make_pair(k,v));
    }

    while(pq.size()>1)
    {
        pair<int,vector<int>> p1=pq.top();
        pq.pop();
        pair<int,vector<int>> p2=pq.top();
        pq.pop();
        vector<int> vt;
        merge(p1,p2,vt);
        pq.push(make_pair(vt.size(),vt));
        // cout<<vt.size()<<endl;

    }
    pair<int,vector<int>>p=pq.top();
    // cout<<p.first<<endl;
    for(auto x:p.second)
    {
        cout<<x<<" ";
    }
}
