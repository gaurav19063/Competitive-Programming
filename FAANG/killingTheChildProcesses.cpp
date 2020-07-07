#include <iostream>
#include<unordered_map>
#include<list>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
class Graph{
    private:
    unordered_map<int,list<int>> g;
    public:
   void AddEdge(int a,int b)
    {
        g[a].push_back(b);
    }
    void printAdjList(){
        for(auto x:g)
        { cout<<x.first<<"->";
            for(auto y:x.second)
            cout<<y<<",";
            cout<<endl;
        }
    }
 vector<int> BFS(int src)
 {
      queue<int> q;
      q.push(src);
      unordered_map<int,int> visited;
      visited[src]=1;
      vector<int> bfs;
      while(!q.empty())
      {
          int front=q.front();
          q.pop();
          bfs.push_back(front);
          for(auto x:g[front])
          {
              if(visited.count(x)==0)
              {
                  q.push(x);
                  visited[x]=1;
              }
          }

      }
      return bfs;
 }
};


int main() {
    // cout<<"Hello World!";
    Graph g;
    int n,k;
    cin>>n>>k;
    int p[n];
    for(int i=0;i<n;i++)
    cin>>p[i];
    for(int i=0;i<n;i++)
    { int nd;
    cin>>nd;
        g.AddEdge(nd,p[i]);
    }

    vector<int> v=g.BFS(k);
    sort(v.begin(),v.end());
    for(auto x: v)
    cout<<x<<" ";
    // cout<<endl;
    // g.printAdjList();
}
