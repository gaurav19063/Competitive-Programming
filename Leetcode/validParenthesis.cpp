class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i]==')'&&!st.empty()&&st.top()=='(')
                {st.pop();
                 continue;
                }
                else if(s[i]=='}'&&!st.empty()&&st.top()=='{')
                    {st.pop();
                 continue;
                }
                 else if(s[i]==']'&&!st.empty()&&st.top()=='[')
                    {st.pop();
                 continue;
                }
                else return false;


            }



        }
         if(st.empty())
                return true;
            else return false;

    }
};
