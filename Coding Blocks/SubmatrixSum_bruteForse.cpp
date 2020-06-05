#include <iostream>
using namespace std;
int find_submatrix_sum(int a[100][100],int i,int j,int n,int m)
{ int sum=0;
    for(int p=0;p<=n;p++)
    for(int q=0;q<=m;q++)
    for(int r=n;r>=i;r--)
    for(int s=m;s>=j;s--)
    {
    for(int t=p;t<=r;t++)
    for(int u=q;u<=s;u++)
    {
        // cot<<p<<q
      sum+=a[t][u];
    }
    // cout<<sum<<' '<<p<<" "<<r<<" "<<q<<" "<<s<<endl;
    }
return sum;

}

int main() {
    // cout<<"Hello World!";
    int n=10,m=15;
    int a[100][100];
    int k=0;
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    a[i][j]=k++;

 cout<<find_submatrix_sum(a,0,0,m-1,n-1);
}
