class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
	int n;
	// cin>>s>>n;
        s=num;
        n=k;
	stack<char> st;
	for(int i=0;i<s.size();i++)
	{
		while(!st.empty()&&n>0&&st.top()>s[i])
		{
			st.pop();
			n--;
		}
		st.push(s[i]);
	}

	string st_temp="";

	while(!st.empty())
	{
		st_temp=st.top()+st_temp;
		st.pop();
	}
	if(st_temp.length()-n<0)
	{

		return "0";
	}
	st_temp=st_temp.substr(0,st_temp.length()-n);

        string str="";
        int flag=0;
            for(int i=0;i<st_temp.size();i++)
            {
                if(st_temp[i]!='0')
                    flag=1;
                if(flag==0 &&st_temp[i]=='0')
                    continue;
                else{
                    str+=st_temp[i];
                }

            }
        // return str;
        if(str.length()==0)
	return "0";
	else
	return str;

    }
};
