#include <iostream>
#include<stack>
#include<vector>

using namespace std;
int findlongestbalancedParenthesis(string s)
{
    vector<int> v(s.size(),0);
    stack<char> st;
    int count=0;
    int max1=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
            v[i]=count;
        }
        else if(!st.empty()&&st.top()=='('&&s[i]==')')
        {
            st.pop();
            count+=2;
            v[i]=count;
        }
        else if(st.empty()&&s[i]==')')
        {   count=0;
            v[i]=count;
        }
        max1=max(max1,v[i]);
    }
    // for(auto x:v)
    // cout<<x<<" ";
    return max1;

}
int main()
{

    string s;
    cin>>s;
    cout<<findlongestbalancedParenthesis(s);
return 0;
}
