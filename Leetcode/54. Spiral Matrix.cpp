class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vt;

        int a=0,b=0;
        int c=matrix.size()-1;//rows
        if(c==-1)
            return vt;
        int d=matrix[0].size()-1;//cols

        while(a<=c&&b<=d)
        {
            for(int i=b;i<=d;i++)
                vt.push_back(matrix[a][i]);
            for(int i=a+1;i<=c;i++)
                vt.push_back(matrix[i][d]);
            if(a<c&&b<d){
            for(int i=d-1;i>=b;i--)
                vt.push_back(matrix[c][i]);
            for(int i=c-1;i>a;i--)
                vt.push_back(matrix[i][b]);
            }
            a++;b++;c--;d--;
        }
        return vt;

    }
};
