class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(auto x:emails)
        {
            string st;
            int flag1=0,flag2=0,flag3=0;
            for(auto y :x)
            {
                if(y=='.'&&!flag3)
                {
                    flag1=1;
                }
                else if(y=='+'&&!flag3)
                {
                    flag2=1;
                }
                else if(y=='@')
                {
                    flag1=0;flag2=0;
                    flag3=1;
                    st.push_back(y);
                }
                else if(flag2)
                {
                    continue;
                }
                else if(flag2==0)
                {
                    st.push_back(y);
                }


            }
            s.insert(st);
        }
        return s.size();

    }
};
