#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.first<p2.first)
    return true;
    return false;
}
vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vt;
        // vector<int> v(nums);
        vector<pair<int ,int>> v;
        for(int i=0;i<nums.size();i++)
        v.push_back(make_pair(nums[i],i));
        sort(v.begin(),v.end(),comp);
        for(int i=0,j=v.size()-1;i<j;)
        {
        // cout<<v[i].first<<" ";
        if(v[i].first+v[j].first==target)
        {
            vt.push_back(v[i].second);
            vt.push_back(v[j].second);
            return vt;
        }
       else if(v[i].first+v[j].first<target)
        i++;
        else
        j--;

        }
        return vt;
    }
int main()
{
  vector<int> v={4,3,5,6,7,7,3,4,10};
// fun(v);
vector<int> vt=twoSum(v,6);
cout<<vt.size()<<" ";
cout<<vt[0]<<" "<<vt[1];
}
