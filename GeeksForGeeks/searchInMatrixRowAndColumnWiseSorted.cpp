#include <iostream>
#include<vector>
using namespace std;
pair<int,int> findVal(vector<vector<int>> a,int n,int m,int target)
{
    int i=0;
    int j=m-1;
    while(i<n&&j>=0)
    {
        if(a[i][j]==target)
        return make_pair(i,j);
       else if(a[i][j]>target)
       j--;
       else
       i++;
    }
    return make_pair(-1,-1);
}
int main() {
    // cout<<"Hello World!";
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        vector<int> temp(m);
        for(int j=0;j<m;j++)
        cin>>temp[j];
        v.push_back(temp);

    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     cout<<v[i][j]<<" ";
    //     cout<<endl;

    // }
    int target;
    cin>>target;
    pair<int,int> l=findVal(v,n,m,target);
    cout<<"location: "<<l.first<< " "<<l.second<<endl;

}
