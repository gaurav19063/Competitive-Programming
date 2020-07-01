class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> v=heights;
        int n=v.size();
            int area=0;
    stack<int> st;
    int top=0;
    int i=0;
    for(;i<n;i++)
    {

        if(i==0)
        {
            st.push(i);
            continue;
        }
       else if(st.empty())
        {
        area=max(area,v[top]*i);
        st.push(i);

        }
        else
            {
                while(!st.empty()&&v[st.top()]>v[i])
                {
                    top=st.top();
                    st.pop();

                    if(!st.empty())
                    area=max(area,v[top]*(i-st.top()-1));
                    else
                    area=max(area,v[top]*i);
                }

                    st.push(i);

            }
        // cout<<area<<" ";
    }
    // cout<<i<<endl;
    while(!st.empty())
    {
        top=st.top();
                    st.pop();
                    if(!st.empty())
                    area=max(area,v[top]*(i-st.top()-1));
                    else
                    area=max(area,v[top]*i);
                    // i++;
                    //  cout<<area<<" ";

    }
    // cout<<st.size()<<endl;
    return area;

    }
};
