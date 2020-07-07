#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
#include<list>
#include<set>
using namespace std;
bool isBipartite(unordered_map<int,set<int>>&umap,int x)
{   unordered_map <int,int> color;
    queue<int> q;
    int src=x;
    q.push(src);
    // cout<<q.size()<<endl;
    unordered_map<int,int> visited;
    visited[src]=1;
    color[src]=1;
    while(!q.empty())
    {
        int front=q.front();
        int clr=color[front];
        q.pop();
        for(auto x:umap[front])
        {

            if(!visited[x])
            { clr==1?clr=2:clr=1;
                q.push(x);
                visited[x]=1;
                color[x]=clr;
            }
            else if(color[x]!=clr)
            {return 0;
            }
        }
    }


    return 1;
}
bool checkBipartite(unordered_map<int,set<int>> &umap)
{
    for(auto x:umap)
    {
        if(!isBipartite(umap,x.first))
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int n;
    cin>>n;
    unordered_map<int,set<int>> umap;
    for(int i=0;i<n;i++)
    {
    int d1,d2;
    cin>>d1>>d2;
    umap[d1].insert(d2);
    }
    // cout<<umap.size();
    // for(auto x:umap)
    // {
    //     cout<<x.first<<"->";
    //     for(auto y:x.second)
    //     cout<<y<<" ";
    //     cout<<endl;
    // }
    cout<<checkBipartite(umap);

}
