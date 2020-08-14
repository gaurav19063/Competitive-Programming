
/*  Function to find the area of 1s
*   SIZE: declared globally for matrix definition
*   n, m: row and column of matrix
*   A[][]: 2D matrix from input
*/
int dfsarea(int A[SIZE][SIZE],int N,int M,int visited[101][101],int i,int j)
{
    int X[]={-1,-1,-1,0,0,1,1,1};
    int Y[]={-1,0,1,-1,1,-1,0,1};
    stack<pair<int,int>> st;
    st.push(make_pair(i,j));
    visited[i][j]=1;
    int count=1;
    while(!st.empty())
    {
        pair<int,int> top=st.top();
        st.pop();
        int x=top.first;
        int y=top.second;
        for(int i=7;i>=0;i--)
        {
            int p=x+X[i];
            int q=y+Y[i];
            if(p<N&&q<M&&p>=0&&q>=0&&A[p][q]==1&&visited[p][q]==0)
            {count++;
            visited[p][q]=1;
            st.push(make_pair(p,q));

            }
        }
    }
    return count;
}
int findMaxArea(int N, int M, int A[SIZE][SIZE] )
{
    // Your code here
    // cout<<N<<M<<endl;
    int visited[101][101];
    int maxarea=0;
    // cout<<N<<" "<<M;
    memset(visited,0,sizeof(visited));
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            // cout<<A[i][j]<< ' ';
            if(A[i][j]){
                // cout<<i<<" "<<j<<endl;

            maxarea=max(maxarea,dfsarea(A,N,M,visited,i,j));
            }
        }

    }
    return maxarea;


}
