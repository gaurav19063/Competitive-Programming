class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int a[n+1][n+1];
        memset(a,0,sizeof(a));
        int maxpal=0;
        int count=0;
        for(int x=0;x<n;x++)
        {
            for(int y=0;x+y<n;y++)
            {
                int i=y;
                int j=x+y;
                if(i==j)
                {   a[i][j]=1;
                    count++;
                 }
                else if(i+1==j&&s[i]==s[j])
                {
                    a[i][j]=1;
                    count++;
                }
                else if(s[i]==s[j]&&a[i+1][j-1])
                {count++;
                 a[i][j]=1;
                 }
            }
        }

        return count;
    }
};
