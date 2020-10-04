class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        // stack<int> st;
        // st.push(0);
        vector<int> temp;
        vector<vector<int>> vt;
        temp.push_back(0);
        dfs(graph,vt,temp,0);

        return vt;
    }
void dfs(vector<vector<int>> &graph,vector<vector<int>> &vt,vector<int> &temp, int s)
{
             for(auto x:graph[s])
             {
                 temp.push_back(x);
                 if(x==graph.size()-1){
                     vt.push_back(vector<int> (temp));
                 }
                 dfs(graph,vt,temp,x);
                 temp.pop_back();
             }
    }
};
