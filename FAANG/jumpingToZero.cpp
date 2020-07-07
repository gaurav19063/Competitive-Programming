#include <iostream>
#include<unordered_map>
#include<vector>
#include<list>
#include<stack>
using namespace std;
bool isjumpingToZero(vector<int> v, int n,int k)
{
    unordered_map<int,list<int>> umap;
    for(int i=1;i<=n;i++)
    {
        int left=i-v[i];
        int right=i+v[i];
        if(left>0)
        umap[i].push_back(left);
        if(right<=n)
        umap[i].push_back(right);
    }
    unordered_map<int,int> visited;
    stack<int> st;
    st.push(k);
    visited[k]=1;
    while(!st.empty())
    {
        int top=st.top();
        st.pop();
        if(v[top]==0)
        return true;
        for(auto x:umap[top])
        {
            if(visited.count(x)==0)
            {
                st.push(x);
                visited[x]=1;
            }
        }
    }

    return false;
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++)
    cin>>v[i];
    isjumpingToZero(v,n,k)?cout<<"YES":cout<<"NO";

}
