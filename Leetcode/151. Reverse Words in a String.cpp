class Solution {
public:
    string reverseWords(string s) {
        istringstream is(s);
        string word;
        vector<string> v;
        while(is>>word)
        {
            v.push_back(word);

        }
        string st;
        for(int i=v.size()-1;i>=0;i--)
        {
            st+=v[i];
            if(i>0)
            st+=" ";
        }
        return st;
    }
};
