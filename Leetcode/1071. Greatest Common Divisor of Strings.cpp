class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s1,s2;
        if(str1.size()<s2.size())
        {    s2=str2;
             s1=str1;
        }
        else
        {
            s1=str2;
            s2=str1;
        }
        for(int i=s1.size();i>0;i--)
        {
            string s=s1.substr(0,i);

            if(gcd(s, s1) && gcd(s,s2))
                return s;
        }
        return "";
    }
    bool gcd(string s1,string s2)
    {
        if(s2.size() % s1.size() != 0) return false;
        for(int i=0;i<s2.size();i+=s1.size())
        {
            if(s1!=s2.substr(i,s1.size()))
                return false;

        }
        return true;
    }
};
