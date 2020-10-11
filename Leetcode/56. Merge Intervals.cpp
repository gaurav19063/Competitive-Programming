class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        stack<vector<int>> st;
        for(int i=0;i<intervals.size();i++)
        {
            if(st.empty())
            {
            st.push(intervals[i]);
            }
            else
            {
                vector<int> top=st.top();
                st.pop();
                if(top[1]>=intervals[i][0])
                {
                    vector<int> temp;

                    st.push(vector<int>{top[0],max(intervals[i][1],top[1])});
                 }
                else
                {
                    st.push(top);
                    st.push(vector<int>{intervals[i][0],intervals[i][1]});
                }

            }
        }

        vector<vector<int>> vt;
        while(!st.empty())
        {
            vt.push_back(st.top());
            st.pop();
        }
        reverse(vt.begin(),vt.end());
        return vt;
    }

};
