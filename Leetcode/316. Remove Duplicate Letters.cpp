class Solution {
public:
    string removeDuplicateLetters(string s) {
        int last_index[26]={0};
//         save the last index
        for(int i=0;i<s.size();i++)
            last_index[s[i]-'a']=i;
        int visited[26]={0};
        stack<int> st;
         string ans;
//         loop over all the string chracter
        for(int i=0;i<s.size();i++)
        {
//             if stack is empty push the character directly
            if(st.empty())
            {
                st.push(s[i]);
                visited[s[i]-'a']=1;

            }
            else{
//                 this loop checks that is a letter is greater than the upcomming letter then should it be stay in the stack or not.
//
                while(!st.empty()&&!visited[s[i]-'a']&&st.top()>s[i]&&last_index[st.top()-'a']>i)
                {

                    visited[st.top()-'a']=0;
                    st.pop();
                }

                if(st.empty())
                {  st.push(s[i]);
                 visited[s[i]-'a']=1;
                }
               else if(!visited[s[i]-'a'])
                {
                    st.push(s[i]);
                    visited[s[i]-'a']=1;
                }
            }
        }
//         to copy all the letter to an string

         while(!st.empty())
            {
                ans.push_back(st.top());
                st.pop();
            }
//         reverse the string
            reverse(ans.begin(),ans.end());
        return ans;
    }
};
