class Solution {
public:
//     bool isValidSudoku(vector<vector<char>>& board) {

//     }
    bool isValid(vector<vector<char>>& a,int i,int j)
{
    int n=9;
    for(int k=0;k<n;k++)
    {

        // cout<<i<<" "<<k<<" ";
        if(k==i)
        continue;
        if(a[k][j]==a[i][j])
        return false;

    }
    for(int k=0;k<n;k++)
    {
        if(k==j)
        continue;
        if(a[i][k]==a[i][j])
        return false;
    }
        int sb=((i)/3)*3;
        int eb=((j)/3)*3;
        int b[10]={0};
        for(int p=sb;p<sb+3;p++)
        {
            for(int q=eb;q<eb+3;q++)
            {
                if(a[p][q]=='.')
                    continue;


                   if(b[a[p][q]-'0']==1)
                     return false;
                     else
                     {
                         b[a[p][q]-'0']=1;
                     }

            }

        }
    return true;

}
 bool isValidSudoku(vector<vector<char>>& a)
{
    // a[1][3]=-1;
    // cout<<a[0][0];
    int n=9;
     // cout<<a.size()<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            // cout<<i<<" "<<j<<endl;
        if(a[i][j]=='.')
        continue;

            if(!isValid(a,i,j))
            {
                // cout<<i<<" "<<j<<endl;
                return 0;
            }
        }

    }
    return 1;
}
};
