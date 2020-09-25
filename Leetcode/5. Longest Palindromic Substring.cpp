class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==0)
            return s;
        int n=s.size();
        vector<int> v(n);
        int a[n][n];
        int maxlen=0;
        pair<int,int> p;
        memset(a,0,sizeof(a));
        for(int x=0;x<n;x++)
        {
        for(int y=0;x+y<n;y++)
        {
            int i=y;
            int j=x+y;
            if(i==j)
                a[i][j]=1;
            else if(i+1==j&&s[i]==s[j])
                a[i][j]=1;
            else if(s[i]==s[j]&&a[i+1][j-1])
                a[i][j]=1;
                if(a[i][j]&&maxlen<j-i+1)
                {maxlen=j-i+1;
                 p.first=i;
                 p.second=j;
                }
        }
        }
        return string (s.begin()+p.first,s.begin()+p.second+1);

    }
};
