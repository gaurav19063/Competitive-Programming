#include <iostream>
using namespace std;
int n;
int table[1001][1001];
// int *a;

int findMaxCost(int *a,int left,int right)
{
    if(right-left<=1)
    return 0;
    if(table[left][right]!=-1)
    return table[left][right];
    else{
        int cost=0;
        for(int i=left+1;i<right;i++)
        {
           cost=max(cost,findMaxCost(a,left,i)+a[i]*a[left]*a[right]+findMaxCost(a,i,right));//This is the whole logic findMaxCost(a,left,i)+a[i]*a[left]*a[right]+findMaxCost(a,i,right)
        //    cout<<cost<<endl;

        }
       return  table[left][right]=cost;

    }
}
int main() {
    // cout<<"Hello World!";
    memset(table,-1,sizeof table);
    cin>>n;
   int a[n+2];
    a[0]=1;
    a[n+1]=1;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
         }
         cout<<findMaxCost(a,0,n+1);
        //  for(int i=0;i<=n+1;i++)
        //  {
        //      for(int j=0;j<=n;j++)
        //      cout<<table[i][j]<<" ";
        //      cout<<endl;
        //  }

}
