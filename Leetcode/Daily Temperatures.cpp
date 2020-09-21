class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n=T.size();
        stack<int> st;
        vector<int> vt(n,0);
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(i);

            }

        else{
         while(!st.empty()&&T[st.top()]<T[i])
            {
                // vt.push_back(i-st.top());
             vt[st.top()]=i-st.top();
             st.pop();
            }
            st.push(i);
        }
        }
        return vt;
    }

};
