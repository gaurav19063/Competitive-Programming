#include <iostream>
#include<unordered_map>
#include<cstring>
#include<list>
#include<queue>
#include<stack>
using namespace std;
template<typename t>
class Graph{
    private:
    unordered_map<t,list<t>> adjList;
    public:
   void addEdge(t a,t b)
    {
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    void printAdjList()
    {
        for(auto x:adjList)
        { cout<<x.first<<"->";
            for(auto y:x.second)
            cout<<y<<",";
            cout<<endl;
        }
    }
    void BFS(t src)
    {
            queue<t> q;
            unordered_map<t,bool> visited;
            q.push(src);
            visited[src]=true;
            while(!q.empty())
            {
                t front=q.front();
                q.pop();
                cout<<front<<" ";
                for( auto x: adjList[front])
                {
                    if(visited.count(x)==0)
                    {
                        visited[x]=true;
                        q.push(x);
                    }

                }
            }
    }
void DFS(t src)
{
    stack<t> st;
    st.push(src);
    unordered_map<t,bool> visited;
    visited[src]=true;

    while(!st.empty())
    {
        t top=st.top();
        cout<<top<<" ";
        st.pop();
        for(auto x:adjList[top])
        {
            if(visited.count(x)==0)
            {visited[x]=true;
            st.push(x);
            }
        }

    }
}
};
int main() {
    // cout<<"Hello World!";
    Graph<string> g;
    int n;
    cin>>n;
    while(n--)
    {
        // cout<<" hello";
        string s1,s2;
        cin>>s1>>s2;
        g.addEdge(s1,s2);

    }
    // g.addEdge("a","b");
    // g.addEdge("b","c");
    // g.addEdge("a","c");
    g.printAdjList();
    cout<<endl;
    g.BFS("a");
    cout<<endl;
    g.DFS("a");

}
